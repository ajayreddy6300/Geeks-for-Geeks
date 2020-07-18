

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends





//User function Template for C++

//You need to complete this function
int digitsInFactorial(int N)
{
    if(N<=1)
    return 1;
    else
    {
        double di=0;
        for(int i=2;i<=N;i++)
        {
            di+=log10(i);
        }
        return floor(di)+1;
    }
}


// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
