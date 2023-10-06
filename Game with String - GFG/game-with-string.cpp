//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        
        map<char,int>mp;
        for(char it:s){
            mp[it]++;
        }
        priority_queue<int>q;
        int ans=0;
        for(auto &it:mp){
            q.push(it.second);
        }
        while(k){
            int top=q.top();
            q.pop();
            top--;
            k--;
            q.push(top);
        }
        while(q.size()){
            ans+=(q.top()*q.top());q.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends