class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even, odd;
        int n = nums.size();
        
        // Separate evens and odds
        for(int i=0; i<n; i++){
            if(i % 2 == 0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        
        // Sort evens ascending, odds descending
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());
        
        // Merge back
        int e=0, o=0;
        for(int i=0; i<n; i++){
            if(i % 2 == 0) nums[i] = even[e++];
            else nums[i] = odd[o++];
        }
        
        return nums;
    }
};
