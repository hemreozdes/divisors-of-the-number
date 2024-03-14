#include <stdio.h>

int main()
{
    int num,i;
    printf("Enter a num=");scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            printf("%d",i);
        }
    }
    printf("\n");
    alternative(num);
    getch();
    return 0;
}
    void alternative(int a){
    int k=1;
    for(k;k<=a/2;k++){
        if(a%k==0){
            printf("%d ",k);
        }
    }
    printf("%d",a);
    }
