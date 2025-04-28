class Solution {
    public:
      void mergeArrays(vector<int>& a, vector<int>& b) {
          // code here
          int n = a.size();
          int m = b.size();
          
          for(int  i = n-1;i>= 0; i--){
              if(a[i] > b[0]){
                  swap(a[i],b[0]);
                  
                  int first = b[0];
                  int k=1;
                  while(k < m && b[k] < first){
                      b[k-1] = b[k];
                      k++;
                  }
                  b[k-1] = first;
              }
          }
          sort(a.begin(),a.end());
          sort(b.begin(),b.end());
      }
  };