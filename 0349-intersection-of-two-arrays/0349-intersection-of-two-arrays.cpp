#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end()); // hash table for nums1
        unordered_set<int> result; // to avoid duplicates

        for(int x : nums2){
            if(set1.find(x) != set1.end()){ // check if x exists in nums1
                result.insert(x);
            }
        }

        return vector<int>(result.begin(), result.end()); // convert set to vector
    }
};
