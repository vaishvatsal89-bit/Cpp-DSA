class Solution {
public:
    void sortColors(vector<int>& nums) {
       int curr0=0;
       int curr1=0;
      int curr2 = 0;
       for(int i =0;i<nums.size();i++){
         if(nums[i]==0){
            curr0++;
         }else if(nums[i]==1){
            curr1++;
         }else {
            curr2++;
         }
       }
       int idx=0;
       for(int j=0;j<curr0;j++){
        nums[idx++]=0;
       }
       for(int i=0;i<curr1;i++){
        nums[idx++]=1;
       }
       for(int j=0;j<curr2;j++){
        nums[idx++]=2;
       }
    }
};