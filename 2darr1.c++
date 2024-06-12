class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int i=0, j=0;
        while(i < matrix.length && j < matrix[0].length && matrix[i][j] <= target){
            if(matrix[i][j] < target && matrix[i][matrix[0].length-1] < target){
                i++;
            } else if (matrix[i][j] <= target && matrix[i][matrix[0].length-1] >= target){
                if(matrix[i][j] < target){
                    j++;
                } else if(matrix[i][j] == target){
                    return true;
                }
            } else if(matrix[i][j] == target){
                return true;
            }
        }
        return false;
    }
}