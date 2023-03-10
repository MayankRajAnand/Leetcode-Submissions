//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    using ll=long long;
    long long maxTripletProduct(long long arr[], int n)
    {
    	ll a=INT_MAX,b=INT_MAX;
    	ll c=INT_MIN,d=INT_MIN,e=INT_MIN;
    	
    	for(ll i=0;i<n;i++)
    	{
    	    ll it=arr[i];
    	    if(it<a and it<b)
    	    {
    	        a=b;
    	        b=it;
    	    }
    	    else if(it<a)
    	    {
    	        a=it;
    	    }
    	    if(it>c and it>d and it>e)
    	    {
    	        c=d;
    	        d=e;
    	        e=it;
    	    }
    	    else if(it>c and it>d)
    	    {
    	        c=d;
    	        d=it;
    	    }
    	    else if(it>c)
    	    {
    	        c=it;
    	    }
    	}
    	return max(c*d*e, e*a*b);
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends