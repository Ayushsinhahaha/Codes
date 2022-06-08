// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
     bool isprime(int n)
{
   if (n <= 1)
       return false;

   for (int i = 2; i <= sqrt(n); i++)
       if (n % i == 0)
           return false;

   return true;
}
int sumdigits(int n)
{
  int sum=0;
  while(n)
  {
      sum=sum+n%10;
      n=n/10;
  }
   return sum;
}
int smith(int n)
{
   for(int i=2;i<=sqrt(n);i++)
       if(n%i==0 && isprime(i))
           return sumdigits(i) + smith(n/i);
   return sumdigits(n);
   
}
int smithNum(int n) {
       // code here
        if(n==1)
       return false;
   if(isprime(n))
       return false;
   int sum = sumdigits(n);
   if(sum == smith(n))
       return true;
   return false;
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}  // } Driver Code Ends