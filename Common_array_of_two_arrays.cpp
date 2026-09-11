class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    vector<int>ans;

        for(int i =0 ; i<A.size() ; i++){
            int a =0;
            for(int x=0 ; x<=i ; x++){
                for(int j=0 ; j <=i; j++){
                    if (A[x] == B[j]){
                    a++;
                }
                }
            }
             ans.push_back(a);

        }
        return ans;
    }
};
