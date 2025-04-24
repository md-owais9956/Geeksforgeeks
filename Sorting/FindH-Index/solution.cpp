class Solution {
    public:
      // Function to find hIndex
      int hIndex(vector<int>& citations) {
          // code here
          sort(citations.rbegin(), citations.rend());
          for(int i = 0; i< citations.size(); ++i){
              if(citations[i]< i + 1){
                  return i;
              }
          }
          return citations.size();
      }
  };