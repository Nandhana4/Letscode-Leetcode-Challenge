int differenceOfSum(int* nums, int numsSize) {
 int elementsum=0;
 int digitsum=0;   
 for(int i=0;i<numsSize;i++){
   elementsum+=nums[i];
   if(nums[i]>9){
      int temp=nums[i];
      while(temp>0){
        int x=temp%10;
        digitsum+=x;
        temp=temp/10;
      }
   }else{
    digitsum+=nums[i];
   }
 } 
 return (elementsum-digitsum);  
}
