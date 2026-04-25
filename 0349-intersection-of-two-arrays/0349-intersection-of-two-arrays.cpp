class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_set<int> ans;
        for(int x: nums1){
            for(int y: nums2){
                if(x==y) 
                result.push_back(x);
            }
        }
        ans = unordered_set<int>(result.begin(),result.end());
        return vector<int>(ans.begin(),ans.end());
    }
};