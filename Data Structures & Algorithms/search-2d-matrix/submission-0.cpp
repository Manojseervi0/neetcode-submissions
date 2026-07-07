class Solution {
public:
    bool search(vector<vector<int>>& matrix, int target, int row){
        int n=matrix[0].size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(target==matrix[row][mid]){
                return true;
            }
            else if(target>matrix[row][mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
        }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m=matrix.size();
         int n=matrix[0].size();
         int strow=0;
         int endrow=m-1;
         while(strow<=endrow){
            int midrow=strow+(endrow-strow)/2;
            if(target>=matrix[midrow][0] && target<=matrix[midrow][n-1]){
                return search(matrix,target,midrow);
            }
            else if(target>=matrix[midrow][n-1]){
                strow=midrow+1;
            }
            else{
                endrow=midrow-1;
            }
         }
         return false;    
    }
};
