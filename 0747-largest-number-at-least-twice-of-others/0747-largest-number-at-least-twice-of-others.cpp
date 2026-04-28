class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max,max_index=0;
        for(int i=0;i<nums.size();i++){
            if(nums.at(i)>nums.at(max_index)) 
            max_index = i;
        }
        max = nums.at(max_index);
        for(int i=0;i<nums.size();i++){
            if(i!=max_index){
                if(nums.at(i)*2>nums.at(max_index)) return -1;
            }
        }
        return max_index;
    }
};