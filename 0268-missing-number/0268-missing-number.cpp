class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int xr = 0;
        for(int i=0;i<=size;i++){
            xr ^= i;
        }
        for(int val: nums){
            xr ^= val;
        }
        return xr;
    }
};