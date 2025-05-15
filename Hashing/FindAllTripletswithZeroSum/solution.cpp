class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        int n = arr.size();
        set<vector<int>> uniquetriplets;
        vector<vector<int>> result;
        
        for(int i = 0; i < n - 2; ++i){
            for(int j = i+1;j<n-1;++j){
                for(int k = j+1;k<n;++k){
                    if(arr[i] + arr[j] + arr[k] == 0){
                        vector<int> triplet = {i,j,k};
                        uniquetriplets.insert(triplet);
                    }
                }
            }
        }
        for(auto &triplet : uniquetriplets){
            result.push_back(triplet);
        }
        return result;
    }
};