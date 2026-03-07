int subtractProductAndSum(int n) {
  int product=1;
  int sum=0;
  int diff;
  int x;
  int temp;
  x=n;
  while(x>0){
    temp=x%10;
    product*=temp;
    sum+=temp;
    x=x/10;
  } 
  return (product-sum); 
}
