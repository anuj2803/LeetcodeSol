class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.length()-1;
        int cnt = 0;
        while(j>=0)
        {
            if(s[j]==' ' && cnt)
            {
                return cnt;
            }
            else
            {
                if(s[j]!=' ')++cnt;
            }
            j--;
        }
        return cnt;
    }
};