

class Solution {
    public:
      int findMin(vector<int>& arr) {
          // complete the function here
          
          int left = 0 ,right  = arr.size() - 1;
          
          if(arr[left] <= arr[right]) return arr[left];
          
          while(left <= right){
              int mid = left + (right - left) / 2;
              
              if(mid > 0 && arr[mid] < arr[mid - 1]){
                  return arr[mid];
              }
              if(mid < arr.size() -1 && arr[mid] > arr[mid + 1]){
                  return arr[mid + 1];
              }
              if (arr[mid] >= arr[left]){
                  left = mid + 1;
              }else {
                  right = mid - 1;
              }
          }
          return -1;
      }
  };