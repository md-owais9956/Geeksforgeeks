class Solution {
    public:
      // Function to count inversions in the array.
      int merge(vector<int>& arr, int left, int mid, int right){
          int i = left, j = mid, k = 0;
          int inv_count = 0;
          
          vector<int> temp(right - left +1);
          
          while (i< mid && j <= right){
              if (arr[i] <= arr[j]){
                  temp[k++] = arr[i++];
              }else{
                  temp[k++] = arr[j++];
                  inv_count += mid - i;
              }
          }
          while(i < mid)
              temp[k++] = arr[i++];
          while( j<= right)
              temp[k++] = arr[j++];
          
          for(int x = 0; x < temp.size(); ++x)
              arr[left + x] = temp[x];
          
          return inv_count;
      }
      
      int mergesort(vector<int>& arr, int left,int right){
          int inv_count = 0;
          if(left < right){
              int mid = (left + right) /2;
              inv_count += mergesort(arr,left,mid);
              inv_count += mergesort(arr,mid+1,right);
              inv_count += merge(arr,left,mid+1,right);
          }
          return inv_count;
      }
      
      
      
      int inversionCount(vector<int> &arr) {
          // Your Code Here
          return mergesort(arr,0,arr.size() -1);
      }
  };