class Solution {
    public void rotate(int[][] matrix) {
        int R=matrix.length,C=matrix[0].length;
        for(int r=0;r<R;r++){
            for(int c=0;c<r;c++){
                int t=matrix[r][c];
                matrix[r][c]=matrix[c][r];
                matrix[c][r]=t;
            }
        }
        for(int r=0;r<R;r++){
            for(int c=0;c<C/2;c++){
                int t=matrix[r][c];
                matrix[r][c]=matrix[r][C-c-1];
                matrix[r][C-c-1]=t;
            }
        }
    }
}