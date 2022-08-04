#include<stdio.h>
int main()
{
    int i,sum=0,a[10];
    printf("Enter 10 numbers=");
    for(i=0;i<10;i++)
     {
         scanf("%d",&a[i]);
         sum=sum+a[i];
     }
     printf("sum of numbers stored in array=%d",sum);
    return 0;
}
