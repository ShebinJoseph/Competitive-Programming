//Middle of Three
//https://practice.geeksforgeeks.org/problems/middle-of-three2926/1#

//Solution



//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        
        //when B is the middle element
        if(A>B && B>C || C>B && B>A)
        return B;
        
        //when C is the middle element
        else if(A>C && C>B || B>C && C>A)
        return C;
        
        //when all the condition fails
        else
        return A;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  // } Driver Code Ends