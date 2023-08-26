class Solution {
public:

    string longestPalindrome(string s) {
        
        // input string's length
        int n = s.length();

        // starting index of substring
        // there is always present a substring of length 1
        int start = 0 , maxLen = 1;


        // traversing the string 
        // from current index we will go left & right
        // then check characters are matching or not on left & right
        for(int i=1;i<n;i++){

            // we will check for odd length substring
            int left = i , right = i;

            // if we are not out bound & character are matching 
            // and we will calculate current length
            // and compare with longest length 
            while(left >= 0 && right < n && s[left] == s[right]){
                
                // current length
                int currLen = right - left + 1;

                // if current length is greater than maximum Length 
                // we will we will assign current length to maxLen
                // and change starting index of longest substring
                if(currLen > maxLen){
                    maxLen = currLen;
                    start = left;
                }

                // move pointers to left and right
                left--; right++;

            }
              

            // we will check for even length substring
            left = i-1 , right = i;

            // if we are not out bound & character are matching 
            // and we will calculate current length
            // and compare with longest length 
            while(left >= 0 && right < n && s[left] == s[right]){
                
                // current length
                int currLen = right - left + 1;

                // if current length is greater than maximum Length 
                // we will we will assign current length to maxLen
                // and change starting index of longest substring
                if(currLen > maxLen){
                    maxLen = currLen;
                    start = left;
                }

                // move pointers to left and right
                left--; right++;

            }
              

        }

        // return longest substring
        return s.substr(start,maxLen);

    }
};