//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    vector<int> getDistinctDifference(int n, vector<int> &a) {
        unordered_set<int>s;
        vector<int>st(n,0);
        vector<int>end(n,0);
        
        st[0]=1;
        s.insert(a[0]);
        
        for(int i=1;i<n;i++)
        {
            if(s.find(a[i])==s.end())
            {
                st[i]=1+st[i-1];
                s.insert(a[i]);
            }
                
            else
                st[i]=st[i-1];
        }
        
        s.clear();
        
        end[n-1]=1;
        s.insert(a[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            if(s.find(a[i])==s.end())
            {
                end[i]=1+end[i+1];
                s.insert(a[i]);
            }
                
            else
                end[i]=end[i+1];
        }
        
        vector<int>v(n,0);
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                v[i]=0-end[1];
            }
            else if(i==n-1)
            {
                v[i]=st[n-2];
            }
            else{
                v[i]=st[i-1]-end[i+1];
            }
        }
        return v;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends