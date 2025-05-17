class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> unionset;
        
        for(int num :a){
            unionset.insert(num);
        }
        
        for(int num : b){
            unionset.insert(num);
        }
        return unionset.size();
        
    }
};