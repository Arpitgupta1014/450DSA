/* Permutations-of-a-given-strings */
#include <bits/stdc++.h> 
#include <set>
#include <vector>
using namespace std; 

set<string> res;

void permute(string s, int l, int r) 
{ 
    if (l == r) 
        res.insert(s);
    else
    {  
        for (int i = l; i <= r; i++) 
        { 
            swap(s[l], s[i]); 
            permute(s, l+1, r); 
            swap(s[l], s[i]); 
        } 
    } 
} 
int main() 
{ 
    string str;cin>>str; 
    int n = str.size(); 
    permute(str, 0, n-1); 
    vector<string> ans;
    for(auto &st : res) ans.push_back(st);
    for(auto &it : ans) cout<<it<<" ";

    return 0; 
} 
