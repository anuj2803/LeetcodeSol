//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    // your code here
    int ob=0,cb=0;
    int ans=0;
    if(s.size()%2==1)return -1;
   for(int i=0;i<s.size();i++){
       if(s[i]=='{'){
           ob++;
       }else{
          if(ob>0){
              ob--;
          }else{
             ob++;
              ans++;
          }
       }
   }
   int remain=ob/2;
   return ans+remain;
   
    
}