class Solution {
public:

//Link: https://leetcode.com/problems/sort-colors/description/
    void sortColors(vector<int>& nums) {
        
        int ct0=0;
        int ct1=0;
        int ct2=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==0) ct0++;
            if(nums[i]==1)ct1++;
            if(nums[i]==2)ct2++;
        }
        int j=0;

        while(ct0>0){
            nums[j++]=0;
            ct0--;
        }
          while(ct1>0){
            nums[j++]=1;
            ct1--;
        }
  while(ct2>0){
            nums[j++]=2;
            ct2--;
        }

        
    }
};
