class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i=1;i<heights.size();i++){
            int key = heights[i];
            string name_key = names[i];
            int j = i-1;
            while(j>=0 && heights[j]<key){
                heights[j+1] = heights[j];
                names[j+1] = names[j];
                j--;
            }
            heights[j+1] = key;
            names[j+1] = name_key;
        }
        return names;
    }
};