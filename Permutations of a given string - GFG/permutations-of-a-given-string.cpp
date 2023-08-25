//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	void solve(string S,int l,set<string>&ans){
	    if(S.size()==l){
	        ans.insert(S);return;
	    }
	    for(int i=l;i<S.size();i++){
	        swap(S[l],S[i]);
	        solve(S,l+1,ans);
	        swap(S[i],S[l]);
	    }
	}
		vector<string>find_permutation(string S)
		{
		    // Code here there
		   set<string>ans;
		   solve(S,0,ans);
		   vector<string>res(ans.begin(),ans.end());
		    return res;
		    
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends