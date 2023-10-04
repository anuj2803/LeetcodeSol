//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> printUnsorted(int arr[], int n) {
	    // code here
	   int ind1=0,ind2=n-1;
	   int flg=0;
	   int maxi=arr[0];
	   for(int i=1;i<n;i++){
	       if(arr[i]<maxi){
	           ind1=i;
	       }
	       maxi=max(arr[i],maxi);
	   }
	   int mini=arr[n-1];
	    for(int i=n-2;i>=0;i--){
	       if(arr[i]>mini){
	           ind2=i;
	       }
	       mini=min(arr[i],mini);
	   }return {ind2,ind1};
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printUnsorted(arr, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends