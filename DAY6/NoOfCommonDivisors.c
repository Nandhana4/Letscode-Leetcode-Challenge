int commonFactors(int a, int b) {
    int count=0;
    int largest;
    if(a>b)
        largest=a;
    else
        largest=b;
    for(int i=1;i<=largest;i++){
        if((a%i==0) && (b%i==0))
            count++;

    }
   return count; 
}
