//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
string s = bitset<32> (n).to_string(); 
   //int n=s.size();
//  cout<<s;
// for(int i=s.size();i>0&&k>=0;i--){
//     k--;
//     if(k==0){
int i=s.size();
        if(s[i-k-1]=='1')
        {
            //cout<<"yes";
            return true;
        }
    //cout<<k<<" "<<i<<endl;
    

return false;
}
};

//{ Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;//taking testcases
	while(t--)
	{
	    long long n;
	    cin>>n;//input n
	    int k;
	    cin>>k;//bit number k
	    Solution obj;
	    if(obj.checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
// } Driver Code Ends