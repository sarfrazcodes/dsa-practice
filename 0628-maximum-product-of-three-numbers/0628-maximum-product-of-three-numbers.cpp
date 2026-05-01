class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mul1 = nums[n-1]*nums[n-2]*nums[n-3];
        int mul2 = nums[n-1]*nums[0]*nums[1];
        int result = mul1>mul2? mul1 : mul2;

        return result;
    }
};