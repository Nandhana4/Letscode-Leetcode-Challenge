int findGCD(int* nums, int numsSize) {
    int temp;
    int x;
    for(int i=0;i<numsSize-1;i++){
        for(int j=0;j<numsSize-i-1;j++){
            if(nums[j]>nums[j+1]){
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        } 
    }
   int min=nums[0];
   int max=nums[numsSize-1];
   for(int i=1;i<=max;i++){
    if((max%i==0) && (min%i==0))
       x=i;
   }
   return x;   
}
