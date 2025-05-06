class Solution {
    public:
      bool ispossible(vector<int>& arr, int k, int maxpages){
          int students = 1, pages = 0;
          for(int i = 0; i<arr.size();++i){
              if(arr[i]>maxpages) return false;
              if(pages+ arr[i] > maxpages){
                  students++;
                  pages = arr[i];
              }else{
                  pages += arr[i];
              }
          }
          return students <= k;
      }
    
    
      int findPages(vector<int> &arr, int k) {
          // code here
          if(arr.size()<k) return -1;
          
          int low = *max_element(arr.begin(), arr.end());
          int high= accumulate(arr.begin(), arr.end(),0);
          int result = -1;
          
          while (low <= high){
              int mid = low + (high - low) /2;
              if(ispossible(arr,k,mid)){
                  result = mid;
                  high = mid-1;
              }else{
                  low = mid + 1;
              }
          }
          return result;
      }
  };