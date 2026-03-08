class Solution {

    int countdgt(int num){
       
       int cnt=0;

        while(num!=0){
        cnt++;
        num/=10;
        }

        return cnt;
    }
public:
    int findNumbers(vector<int>& nums) {
        int cntnum=0;

        for(auto ele:nums){
            if(countdgt(ele)%2==0)
            cntnum++;
        }

        return cntnum;
    }
};