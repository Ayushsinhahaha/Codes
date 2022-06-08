// { Driver Code Starts

#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int evenFactors(int N){
        // code here
         if(N==2){
           return 3;
       }
       if(N==1){
           return 0;
       }
       int s=0;
       for(int i=2;i<=N;i+=2){
           if(N%i==0){
               s+=i;
           }
       }
       return s;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenFactors(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends