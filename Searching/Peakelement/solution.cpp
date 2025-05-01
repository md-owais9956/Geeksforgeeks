
class Solution {
    public:
      int peakElement(vector<int> &arr) {
          // Your code here
          int n  = arr.size();
          int low = 0,high = n - 1;
          
          while (low <= high){
              int mid = low + (high - low) /2;
              
              bool left_ok = (mid == 0) || (arr[mid] >= arr[mid - 1]);
              bool right_ok = (mid == n - 1) || (arr[mid] >= arr[mid + 1]);
              
              if(left_ok && right_ok){
                  return mid;
              }else if(mid > 0 && arr[mid - 1] > arr[mid]){
                  high = mid - 1;
              }else{
                  low = mid + 1;
              }
          }
          return -1;
          
      }
  };