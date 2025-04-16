class Solution {
    public:
      int getMinDiff(vector<int> &arr, int k) {
          sort(arr.begin(),arr.end());
          int n = arr.size();
          int val = arr[n-1]-arr[0];
          int small = arr[0]+k;
          int large = arr[n-1]-k;
          
          for(int i = 0; i<n-1; i++){
              int mini = min(small,arr[i+1]-k);
              int maxim = max(large,arr[i]+k);
              
              if(mini< 0 )continue;
              val = min(val,maxim-mini);
          }
          return val;
      }
  };