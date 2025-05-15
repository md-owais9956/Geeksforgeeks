class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> setA(a.begin(),a.end());
        unordered_set<int> result;
        
        for(int num : b){
            if(setA.count(num)){
                result.insert(num);
            }
        }
        return vector<int>(result.begin(), result.end());
    }
};