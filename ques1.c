#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the value of N:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum+=i;
    }   
    printf("sum of first %d natural number=%d\n",n,sum);
    return 0;
}