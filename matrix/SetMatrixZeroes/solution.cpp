class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int m = mat.size(), n = mat[0].size();
        bool firstrowzero = false, firstcolzero = false;
        
        for(int j = 0; j < n; j++){
            if(mat[0][j] == 0) firstrowzero = true;
        }
        
        for(int i = 0; i < m; i++){
            if(mat[i][0] == 0) firstcolzero = true;
        }
        
        for(int i = 1; i < m; i++){
            for(int j = 1;j < n;j++){
                if(mat[i][j] == 0){
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }
        
        for(int i = 1; i<m; i++){
            for(int j =1; j<n;j++){
                if(mat[i][0] ==0 || mat[0][j] ==0){
                    mat[i][j] = 0;
                }
            }
        }
        
        if(firstrowzero){
            for(int j = 0; j<n;j++){
                mat[0][j] = 0;
            }
        }
        if(firstcolzero){
            for(int i = 0; i<m; i++){
                mat[i][0] = 0;
            }
        }
        
    }
};