class Solution {
    public:
    
    bool canplacecows(vector<int>& stalls, int k, int dist){
    
          int count = 1;
          int lastpos = stalls[0];
          for(int i = 1; i < stalls.size(); i++){
              if(stalls[i] - lastpos >= dist){
                  count++;
                  lastpos = stalls[i];
              }
              if(count >= k) return true;
          }
          return false;
    }
  
      int aggressiveCows(vector<int> &stalls, int k) {
  
          // Write your code here
          sort(stalls.begin(), stalls.end());
          int low = 1;
          int high = stalls.back() - stalls[0];
          int result = 0;
          
          while(low <= high){
              int mid = low +(high - low)/2;
              if(canplacecows(stalls,k,mid)){
                  result = mid;
                  low = mid + 1;
              }else{
                  high = mid - 1;
              }
          }
          return result;
      }
  };