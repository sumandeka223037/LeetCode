class Solution {
    public int[] getSneakyNumbers(int[] nums) {
        HashSet<Integer>arr=new HashSet<>();
        HashSet<Integer>arr2=new HashSet<>();
        for(int i:nums){
            if(!arr.contains(i)){
                arr.add(i);
            }
            else{
                arr2.add(i);
            }
            
        }
        int[]res=new int[arr2.size()];
        int j=0;
        for(int i:arr2){
            res[j++]=i;
        }
        return res;
    }
}