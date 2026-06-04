class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int sr=0,er=m-1,sc=0,ec=n-1;
        vector<int> ans;
        while(sr <=er && sc<=ec){
            for(int j=sc;j<=ec;j++){
                ans.push_back(matrix[sr][j]);
            }
            for(int i=sr+1;i<=er;i++){
                ans.push_back(matrix[i][ec]);
            }
            for(int j=ec-1;j>=sc;j--){
                if(sr==er) break;
                ans.push_back(matrix[er][j]);
            }
            for(int i=er-1;i>=sr+1;i--){
                if(sc==ec) break;
                ans.push_back(matrix[i][sc]);
            }
            sr++;
            er--;
            sc++;
            ec--;
        }
        return ans;
    }
};
