class Solution {
public:
    long long gcdSum(vector<int>& nums) {

        int size=nums.size();

        vector<int>pregcd(size);
        int mx=-1;

        for(int i=0;i<size;i++){
            mx=max(mx,nums[i]);
            pregcd[i]=__gcd(nums[i],mx);
        }

        sort(pregcd.begin(),pregcd.end());

        int left=0,right=size-1;

        long long int sum=0;

        while(left<right){
            sum+=__gcd(pregcd[left],pregcd[right]);
            left++;
            right--;
        }


        return sum;
        
    }
};