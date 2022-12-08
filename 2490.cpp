class Solution {
public:
    bool isCircularSentence(string s) {
        bool truth=true;
        int n=s.size();

        for(int i=0;i<n;i++){
            if (s[i]==32){
                if(s[i-1]!=s[i+1]){
                    truth=false;
                    break;
                }
            }
            if(i==n-1){
                if(s[i]!=s[0])  truth=false;
            }
        }

        return truth;
    }
};
