class Solution {
    public void rotate(int[] nums, int k) {
      int n=nums.length;
      k=k%n;
      reverse(nums,0,n-1);//reverse whole array  ---{7,6,5,4,3,2,1}
      reverse(nums,0,k-1);//reverse k elements---k=3----{5,6,7,4,3,2,1}
      reverse(nums,k,n-1);//reverse rest element--rest---{5,6,7,1,2,3,4}
       
    }
    public static void reverse(int[]arr,int start ,int end){
        while(start<end){
            int temp=arr[start];
            arr[start++]=arr[end];
            arr[end--]=temp;
        }
    }
}