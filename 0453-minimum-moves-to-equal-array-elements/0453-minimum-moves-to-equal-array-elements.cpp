class Solution {
public:
    int minMoves(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int sum;
    for(int i=0;i<nums.size();i++){
        sum += nums[i] - nums[0];
        }
        return sum+1;
    }
};