class Solution {
    public int minOperations(int[] nums, int x) {
        int N=nums.length;
        long[] presum=new long[N+1];

        for(int i=1;i<=N;i++)
            presum[i]=presum[i-1]+nums[i-1];
        long total=presum[N];
        int c1=-1;
        int lt=0;
        long sum=0;
        for(int rt=1;rt<=N;rt++){
            sum=presum[rt]-presum[lt];
            if(sum==total-x){
                c1=Math.max(c1,rt-lt);
                System.out.println(lt+" "+rt);
            }
            while(lt<rt && sum>total-x){
                sum+=presum[lt];
                lt++;
                sum-=presum[lt];
            }
            if(sum==total-x){
                c1=Math.max(c1,rt-lt);
                System.out.println(lt+" "+rt);
            }
        }
        
        if(c1==-1)
            return -1;
        return N-c1;
    }
}