class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        unordered_set<int> nums(arr.begin(), arr.end());
        int longeststreak = 0;
        
        for(int num : arr){
            if(nums.find(num - 1) == nums.end()){
                int currentnum = num;
                int currentstreak = 1;
                
                while(nums.find(currentnum + 1)!=nums.end()){
                    currentnum += 1;
                    currentstreak +=1;
                }
                
                longeststreak = max(longeststreak, currentstreak);
            }
        }
        return longeststreak;
    }
};