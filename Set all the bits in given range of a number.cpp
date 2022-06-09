#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int setAllRangeBits(int N , int L , int R) {
        // code here
        int v,x;
        for(int i=L;i<=R;++i){
            v=1<<(i-1);
            N=N|v;
        }
        return N;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,L,R;
        
        cin>>N>>L>>R;

        Solution ob;
        cout << ob.setAllRangeBits(N,L,R) << endl;
    }
    return 0;
}  // } Driver Code Ends{\rtf1}