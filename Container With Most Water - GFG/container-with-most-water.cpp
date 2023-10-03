//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    if(len==1)return 0;
    int n=len;
    int i=0,j=n-1,aj=INT_MIN;
    while(i<j){
        int ans=(j-i)*min(A[i],A[j]);
         aj=max(ans,aj);
         if(A[i]<A[j]){
             i++;
         }else{
             j--;
         }
    }return aj;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends