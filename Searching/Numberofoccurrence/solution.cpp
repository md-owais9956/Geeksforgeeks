class Solution {
    public:
      int countFreq(vector<int>& arr, int target) {
          // code here
          auto lower = lower_bound(arr.begin(), arr.end(), target);
          auto upper = upper_bound(arr.begin(), arr.end(), target);
          return upper - lower;
      }
  };