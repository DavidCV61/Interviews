//Link: https://leetcode.com/problems/maximum-subarray/ 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        std::ios::sync_with_stdio(0);
        std::cin.tie(0);

        int ans=nums[0];
        int output=ans;
        int n=nums.size();
        for(int i=1;i<n;i++){
           
            if(ans>0){
                ans+=nums[i];
            }else{
                ans=nums[i];
            }
            output=max(output,ans);
        }
        return output;
    }
};
