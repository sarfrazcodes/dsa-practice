class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing;
        int size = nums.size();
        for(int i=0;i<=size;i++){
            int count=0;
            for(int j=0;j<size;j++){
                if(nums[j]==i){
                    count = 1;
                }
            }
            if(count==0){
                missing = i;
                break;
            }
        }
        return missing;
    }
};