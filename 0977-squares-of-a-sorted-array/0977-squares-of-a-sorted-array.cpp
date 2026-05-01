class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> results;
        for(int x: nums){
            int square = x*x;
            results.push_back(square);
        }
        sort(results.begin(),results.end());
        return results;
    }
};