//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        int n = S.length();
        
        int start =0, len =1;
        int low, high;
        
        for(int i=0;i<n;i++){
            
            //even
            low = i-1;
            high = i;
            
            while(low>=0 && high<n && S[low] == S[high]){
                if(high-low+1>len){
                    start =low;
                    len = high-low+1;
                }
                high++;
                low--;
            }
            
            low = i-1;
            high = i+1;
            
            while(low>=0 && high<n && S[low]== S[high]){
              if(high-low+1>len){
                    start =low;
                    len = high-low+1;
                }
                high++;
                low--;  
            }
        }
       // cout<<start<<" "<<len<<endl;
        
        string ans ="";
         for(int i=start;i<start+len;i++){
             ans = ans + S[i];
         }
         return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends