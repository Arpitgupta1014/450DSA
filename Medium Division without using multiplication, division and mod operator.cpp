#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
        //code here
        int quotient=0,temp=0;
        int sign=((dividend<0)^(divisor<0))?-1:1;
        dividend=abs(dividend);
        divisor=abs(divisor);
        for (int i = 31; i >= 0; --i) {
        if (temp + (divisor << i) <= dividend) {
        temp += divisor << i;
        quotient |= 1LL << i;
    }
  }
            return quotient*sign;
    }
};

// { Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}
  // } Driver Code Ends