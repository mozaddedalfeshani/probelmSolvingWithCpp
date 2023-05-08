class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0,k=1;
        for(int i=0;i<mat.size();i++){
            
            sum += mat[i][i];
            mat[i][i]=0 ;
        }
        for(int i=0;i<mat.size();i++){
            
            sum += mat[i][mat.size()-k];
            k++;
        }
        return sum;
    }
};