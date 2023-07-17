class Solution {
public:
    int lengthOfLongestSubstring(string s) {
           int i=0,ans=0;
           unordered_map<char,int>mp;
    
        for (int j = 0; j < s.size(); j++) {
            mp[s[j]]++;
            while(mp[s[j]]>1){
                mp[s[i]]--;
                i++;

            }
                ans=max(ans,j-i+1);
            
            
        }
        return ans;
    
    }
};