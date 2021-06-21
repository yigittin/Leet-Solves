class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        for(int i=0;i<(n+1)/2;i++){
            for(int k=0;k<n/2;k++){
                int temp=matrix[n-1-k][i];
                matrix[n-1-k][i]=matrix[n-1-i][n-k-1];
                matrix[n-1-i][n-k-1]=matrix[k][n-1-i];
                matrix[k][n-1-i]=matrix[i][k];
                matrix[i][k]=temp;
            }
        }
    }
};