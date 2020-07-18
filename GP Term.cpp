/*
Input :
2
2 3
1
1 2
2
Output :
2
2
*/

//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends





//User function Template for C++

//Complete this function
double termOfGP(int A,int B,int N)
{
    return double(A*pow(double(B)/double(A),N-1));
}


// { Driver Code Starts.


int main()
{
    int T; //testcases total
    cin>>T;//input the testcases

    for(int i=0;i<T;i++) //white testcases are not exhausted
    {
        int A,B;
        cin>>A>>B; //input first and second term of gp
        int N;
        cin>>N; //input n
        
        cout<<floor(termOfGP(A,B,N))<<endl;
    }

    return 0;
}

  // } Driver Code Ends
