class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)    return 1;
        else{
            vector<int>v(n+1);
            vector<int>v1(n+1,0);
            for(int i=1;i<=n;i++){
                v[i]=i;
            }
            v1[0]=v[0];
            for(int i=1;i<=n;i++){
                v1[i]=v1[i-1]+v[i];
            }
            int sum=v1[n];
            for(int i=1;i<=n;i++){
                if(v1[i]==sum-v1[i-1])  return i;
            }
            return -1;
        }
    }
};
