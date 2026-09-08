class Solution {
    public int[][] generateMatrix(int N) {
        int[][] matrix=new int[N][N];
        int top=0,bottom=N-1,left=0,right=N-1;
        int val=1;
        while(top<=bottom && left<=right){
            for(int c=left;c<=right;c++)
                matrix[top][c]=val++;
            top++;
            for(int r=top;r<=bottom;r++)
                matrix[r][right]=val++;
            right--;
            if(top<=bottom){
                for(int c=right;c>=left;c--)
                    matrix[bottom][c]=val++;
                bottom--;
            }
            if(left<=right){
                for(int r=bottom;r>=top;r--)
                    matrix[r][left]=val++;
                left++;
            }
        }
        return matrix;
    }
}