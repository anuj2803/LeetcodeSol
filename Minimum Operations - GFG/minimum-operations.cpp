//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        int cnt=0;
       
        while(n>0){
         if(n%2==1){
            n=n-1;
            cnt++;
        }else{
            n/=2;
            cnt++;
        }
        }
        // cnt++;
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends