class Solution {
    public record Pair(int x,int y){}
    public int largestOverlap(int[][] img1, int[][] img2) {
        int N=img1.length;
        Map<Pair,Integer> map=new HashMap<>();
        List<List<Integer>> A=new ArrayList<>();
        List<List<Integer>> B=new ArrayList<>();
        for(int r=0;r<N;r++){
            for(int c=0;c<N;c++){
                if(img1[r][c]==1)
                    A.add(List.of(r,c));
                if(img2[r][c]==1)
                    B.add(List.of(r,c));
            }
        }
        int ans=0;
        for(List<Integer> a:A){
            for(List<Integer> b:B){
                int r=(b.get(0)-a.get(0));
                int c=(b.get(1)-a.get(1));
                Pair curr=new Pair(r,c);
                map.put(curr,map.getOrDefault(curr,0)+1);
                ans=Math.max(map.get(curr),ans);
            }
        }
        return ans;
    }
}