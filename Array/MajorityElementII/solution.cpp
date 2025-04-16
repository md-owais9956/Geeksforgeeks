class Solution {
    public:
      // Function to find the majority elements in the array
      vector<int> findMajority(vector<int>& arr) {
          // Your code goes here.
          int n = arr.size();
          int num1=-1,num2=-1,count1=0,count2=0;
          int maj = n/3;
          for(int num : arr){
              if(num == num1){
                  count1++;
              }else if(num == num2){
                  count2++;
              }else if(count1==0){
                  num1 = num;
                  count1=1;
              }else if(count2 == 0){
                  num2 = num;
                  count2 = 1;
              }else{
                  count1--;
                  count2--;
              }
          }
          count1 = count2 = 0;
          for(int num : arr){
              if (num == num1) count1 ++;
              else if(num==num2) count2++;
          }
          vector<int> arr2;
          if(count1> maj)arr2.push_back(num1);
          if(count2>maj) arr2.push_back(num2);
          
          sort(arr2.begin(),arr2.end());
          
          return arr2;
      }
      
  };