class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<pair<int,int>> st;
        int maxSize=0;
        for(int i=0;i<n;i++){
            int start=i;
            while(!st.empty() && st.top().first>heights[i]){
                auto [h,ind]=st.top();
                maxSize=max(maxSize,h*(i-ind));
                st.pop();
                start=ind;
            }
            st.push({heights[i],start});
        }
        while(!st.empty()){
            auto [h,ind]=st.top();
            st.pop();
            maxSize=max(maxSize,h*(n-ind));
        }
        return maxSize;
    }
};