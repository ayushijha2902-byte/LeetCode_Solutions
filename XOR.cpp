class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n = nums.size();
        int c = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {

                if((nums[i] ^ nums[j]) == 0) {
                    c = c ^ nums[i];
                }

            }
        }

        return c;
    }

    
};
