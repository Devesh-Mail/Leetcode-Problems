class Solution {
    public String frequencySort(String s) {
        record Pair<p1,p2>(p1 first,p2 second){}
        int[] fre=new int[26];
        int[] FRE=new int[26];
        int[] num=new int[10];
        for(int i=0;i<s.length();i++){
            if(Character.isDigit(s.charAt(i))){
                num[s.charAt(i)-'0']++;
            }else if(Character.isUpperCase(s.charAt(i))){
                FRE[s.charAt(i)-'A']++;
            }else{
                fre[s.charAt(i)-'a']++;
            }
        }
        PriorityQueue<Pair<Integer,Character>> pq=new PriorityQueue<>((a,b)-> b.first()- a.first());
        for(int i=0;i<26;i++){
            if(fre[i]>0){
                Pair<Integer,Character> t=new Pair<>(fre[i],(char)(i+'a'));
                pq.add(t);
            }
            if(FRE[i]>0){
                Pair<Integer,Character> t=new Pair<>(FRE[i],(char)(i+'A'));
                pq.add(t);
            }
        }
        for(int i=0;i<10;i++){
            if(num[i]>0){
                Pair<Integer,Character> t=new Pair<>(num[i],(char)(i+'0'));
                pq.add(t);
            }
        }
        String ans="";
        while(!pq.isEmpty()){
            Pair<Integer,Character> t=pq.poll();
            for(int i=0;i<t.first();i++){
                ans+=t.second();
            }
        }
        return ans;
    }
}