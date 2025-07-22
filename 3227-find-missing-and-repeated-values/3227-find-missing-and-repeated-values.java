class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int n=grid.length;
        int size=n*n;
        Map<Integer,Integer> freq=new HashMap<>();
        for(int[] row:grid){// to choose the 1-D array row 
           for(int val:row){
            freq.put(val,freq.getOrDefault(val,0)+1);
           }
        }
        int repeat=-1;
        int miss=-1;
        for(int i=0;i<=size;i++){
            int count=freq.getOrDefault(i,0);//used for counting how many times i val appears in the freq Map
            if(count==2){
                repeat=i;}
            else if(count==0){
                miss=i;}
        }
        return new int[]{repeat,miss};

    }
}