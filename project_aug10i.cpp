#include<stdio.h>
main()
{
    int N,n,i,carry,size,sum,ara[3000];
    printf("enter a number\n");
    scanf("%d",&N);
    ara[0]=1;
    carry=0;
    size=1;
    for(n=2;n<=N;n++){
        for(i=0;i<size;i++){
            sum=(ara[i]*n) +carry;
            ara[i]=sum%10;
            carry=sum/10;
        }
        while(carry>0){
            ara[size++]=carry%10;
            carry=carry/10;
        }
    }
    for(i=size-1;i>=0;i--){
        printf("%d",ara[i]);
    }
}