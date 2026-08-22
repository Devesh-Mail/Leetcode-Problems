class Solution {
    public int largestRectangleArea(int[] heights) {
        int N=heights.length;
        Stack<Integer> st=new Stack<>();
        int max=0;
        for(int i=0;i<N;i++){
            while(!st.isEmpty() && heights[st.peek()] >= heights[i]){
                int curr=heights[st.pop()]*(st.isEmpty()? i: i-st.peek()-1);
                max=Math.max(max,curr);
            }
            st.push(i);
        }
        while(!st.isEmpty()){
            int curr=heights[st.pop()]*(st.isEmpty()? N:N-1-st.peek());
            max=Math.max(max,curr);
        }
        return max;
    }
}