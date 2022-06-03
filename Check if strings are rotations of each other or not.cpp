#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.size()!=s2.size()) return 0;
        string str=s1+s1;
        return (str.find(s2)!=string::npos)?true:0;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}
  // } Driver Code Ends

/*
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        int t=s1.size();
        if(s1.size()!=s2.size()) return 0;
        queue<char> q1,q2;
        for(int i=0;i<s1.size();++i){
            q1.push(s1[i]);
        }
        for(int i=0;i<s2.size();++i){
            q2.push(s2[i]);
        }
        while(t--){
            char ch=q1.front();
            q1.pop();
            q1.push(ch);
            if(q1==q2) return 1;
        }
        return 0;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}
  // } Driver Code Ends
*/