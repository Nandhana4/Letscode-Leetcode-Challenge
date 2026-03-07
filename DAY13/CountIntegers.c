int countEven(int num) {
    int count=0;
    for(int i=1;i<=num;i++){
      int temp=i;
          int digitsum=0;

    while(temp>0){
        int x;
        x=temp%10;
        digitsum+=x;
        temp/=10;
    }
    if(digitsum%2==0)
      count++;
    }
  return count;  
}
