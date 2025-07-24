class Solution {
    public int diagonalSum(int[][] mat) {
        int n=mat.length;
        int sum=0;
        for(int i=0;i<n;i++){
                sum+=mat[i][i];
                sum+=mat[i][n-1-i];
            }
            if(n%2==1){
                sum-=mat[n/2][n/2];
            }
        return sum;
    }
}


// class Solution {
//     public int diagonalSum(int[][] mat) {
//         int n=mat.length;
//         int[]dia1=new int[n];
//         int[]dia2=new int[n];
//         for(int i=0;i<n;i++){
//             dia1[i]=mat[i][i];            
//         }
//         for(int i=0;i<n;i++){
//             dia2[i]=mat[i][n-1-i];
//         }
        
//         ArrayList<Integer>list=new ArrayList<>();
//         for(int i=0;i<dia1.length;i++){
//                 list.add(dia1[i]);
//             }
//         for(int i=0;i<dia2.length;i++){
//             if(!list.contains(dia2[i])){
//                 list.add(dia2[i]);
//             }
//         }
//         int sum=0;
//         for(int num : list){
//             sum+=num;
//         }
//         return sum;
//     }
// }                          this code is correct but is not optimized and also it doesnt pass all the testcases "NICE TRY"