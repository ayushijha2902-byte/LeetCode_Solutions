class Solution {
public:
    int heightChecker(vector<int>& heights) {
    vector<int> expected = heights;
    int a =0;
    sort(expected.begin(), expected.end());
  for(int i=0 ; i<heights.size(); i++){
        if (expected[i] != heights[i]){
            a++;
        }

    }
return a;
    }
};
