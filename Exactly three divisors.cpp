/*
input :
3
6
10
30
Output :
1
2
3
*/
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends





//User function Template for C++

//Complete this function
bool isprime(int n);
int exactly3Divisors(int N)
{
    //Your code here
    int c=1;
    if(N<=3)
    {
       return 0; 
    }
    for(int i=3;i<=sqrt(N);i++)
    {
       if (isprime(i) && (i*i)<=N)
       {
           c++;
       }
    }
    return c;
}
bool isprime(int n)
{
    int limit=(int)sqrt(n);
    for(int i=2;i<=limit;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
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
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends
