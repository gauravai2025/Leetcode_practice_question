class Solution {
public:
    bool isPalindrome(int x) {
    
    if(x<0)
    return 0;

     int temp=x;
  long long   int numrev=0;

     while(temp!=0){
     numrev*=10;
     numrev+=temp%10;
     temp/=10;
     }

     return numrev==x;   
        
    }
};