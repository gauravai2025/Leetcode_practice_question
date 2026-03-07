class Solution {

    int countdiv(int n){

       int cnt=0;
       int sum=0;


        for(int i=1;(i*i)<=n;i++){

            if(n%i==0){
            cnt++;
            sum+=i;

            if(i!=n/i){
            cnt++;
            sum+=n/i;
            }

        }

        }

        if(cnt==4)
        return sum;
        else
        return 0;

        return cnt;
    }
public:
    int sumFourDivisors(vector<int>& nums) {

      int sumdiv=0;

       for(auto ele:nums){
        
        sumdiv+=countdiv(ele);
       } 

       return sumdiv;
        
    }
};