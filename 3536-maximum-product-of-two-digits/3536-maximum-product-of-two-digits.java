class Solution {
    public int maxProduct(int n) {
        List<Integer> list=new ArrayList<>();
        while(n>0){
            list.add(n%10);
            n/=10;
        }
        Collections.sort(list);
        int l=list.size();
        return (list.get(l-1)*list.get(l-2));
    }
}