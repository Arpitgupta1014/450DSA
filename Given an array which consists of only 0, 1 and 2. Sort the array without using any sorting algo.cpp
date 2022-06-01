#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n){
    int x=0,y=0,z=0;
    for(int i=0;i<n;++i){
        if(arr[i]==0) x++;
        else if(arr[i]==1) y++;
        else{
            z++;
        }
    }
    for(int i=0;i<x;++i){
        arr[i]=0;
    }
     for(int i=x;i<x+y;++i){
        arr[i]=1;
    }
     for(int i=x+y;i<x+y+z;++i){
        arr[i]=2;
    }
}
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends