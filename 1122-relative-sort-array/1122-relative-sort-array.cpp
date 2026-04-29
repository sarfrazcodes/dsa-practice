class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> freq;
        for(int num : arr1){
            freq[num]++;
        }
        vector<int> results;
        for(int num : arr2){
            while(freq[num]>0){
                results.push_back(num);
                freq[num]--;
            }
        }
        vector<int> remaining;
        for(auto &p : freq){
            while(p.second>0){
                remaining.push_back(p.first);
                freq[p.first]--;
            }
        }
        sort(remaining.begin(),remaining.end());
        results.insert(results.end(),remaining.begin(),remaining.end());
        return results;
    }
};