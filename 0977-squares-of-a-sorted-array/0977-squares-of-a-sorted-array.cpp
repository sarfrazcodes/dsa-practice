class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> results;
        for(int x: nums){
            int square = x*x;
            results.push_back(square);
        }
        for(int i=0;i<results.size()-1;i++){
            int min_index = i;
            for(int j=i+1;j<results.size();j++){
                if(results[j]<results[min_index]){
                min_index = j;
            }
            }
            swap(results[i],results[min_index]);
        }
        return results;
    }
};