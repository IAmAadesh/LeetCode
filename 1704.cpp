class Solution {
public:
    bool halvesAreAlike(string s) {
        int count1=0,count2=0;
        int n=s.size();
        vector<char>v={'a','e','i','o','u','A','E','I','O','U'};

        for(int i=0;i<n/2;i++){
            if(find(v.begin(),v.end(),s[i])!=v.end()){
                count1++;
            }
        }
        for(int i=n/2;i<n;i++){
            if(find(v.begin(),v.end(),s[i])!=v.end()){
                count2++;
            }
        }
        return count1==count2;
    }
};
