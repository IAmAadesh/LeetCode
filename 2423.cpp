class Solution {
public:
    bool equalFrequency(string word) {
        int n=word.size();
        unordered_map<char,int>m;
        map<int,int>s;

        for(int i=0;i<n;i++)  m[word[i]]++;
        if(m.size()==n) return true;
        if(m.size()==1) return true;
        int k=m.size();
        
        for(auto &it:m) s[it.second]++;
        
        if(s.size()>2 || s.size()<2)  return false;
        if(s.begin()->first ==1 && s.begin()->second==1)    return true;
        if(s.begin()->second == k-1){
            int diff=s.begin()->first;
            s.erase(s.begin());
            diff-=s.begin()->first;
            if(abs(diff)==1)    return true;
        }
        if(s.begin()->first ==1 && s.begin()->second==1)    return true;
        return false;
    }
};
