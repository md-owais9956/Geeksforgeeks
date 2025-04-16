class Solution {
    public:
      void nextPermutation(vector<int>& arr) {
          int size = arr.size();
          int n = size;
          int index = -1;
          for(int i = n-2; i>=0; i--){
              if(arr[i]<arr[i+1]){
                  index = i;
                  break;
              }
          }
          if(index == -1){
              reverse(arr.begin(),arr.end());
              return;
          }
          for(int i = n-1; i>index; i--){
              if(arr[index]<arr[i]){
                  swap(arr[index],arr[i]);
                  break;
              }
              
          }reverse(arr.begin() + index + 1 , arr.end());
      }
  };