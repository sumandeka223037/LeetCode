class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[]res=new int[2*n];
        for(int i=0;i<n;i++){
            res[2*i]=nums[i];
            res[2*i+1]=nums[i+n];
        }
        return res;

        //wrong
        // int size=nums.length;
        // int div=size/2;
        // int[]arr1=new int[div];
        // int[]arr2=new int[div];
        // for(int i=0;i<div;i++){
        //     arr1[i]=nums[i];
        // }
        // int k=0;
        // for(int j=div;j<size;j++){
        //     arr2[k++]=nums[j];
        // }
        // int[]res=new int[size];
        // for(int i=0;i<arr1.length;i++){
        //     if(i%2==0){
        //         res[i]=arr1[i];
        //     }
        //     else{
        //         res[i]=arr2[i];
        //     }

        }
        
    }    



