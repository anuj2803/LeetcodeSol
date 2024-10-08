class Solution {
public:
    int minSwaps(string s) {
        stack<char>st;
    for(auto it:s){
        if(it=='['){
            st.push(it);
        }else if(!st.empty()){
            st.pop();
        }
    }
        int n=st.size();
        return (n+1)/2;
    }
};