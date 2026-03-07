class Solution {

int solve(vector<int>&dp,int n){

   if(n==0)
   return 0;
     
  dp[1]=1;

  for(int i=2;i<=n;i++){
    dp[i]=dp[i-1]+dp[i-2];
  }

   if(dp[n]!=-1)
   return dp[n];


  return dp[n];

    }

public:
    int fib(int n) {

vector<int>dp(n+1,0);
  
return solve(dp,n);
       
    }
};