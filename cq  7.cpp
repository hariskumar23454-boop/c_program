#include<stdio.h>
int mani()  {
    int a,b,c;
    scanf("%d",&a);
    b=a % 10;
    if (b%3==0) {
        printf("the last digit of %d is divisble by 3.\n",a);
    } else {
        printf("the last digit of %d is not divisble by 3.\n",a);
}
        return 0;
 }  
