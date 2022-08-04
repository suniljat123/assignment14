#include<stdio.h>
int main()
{
    int i,sum=0,a[10];
    float avg;
    printf("Enter 10 numbers=");
    for(i=0;i<10;i++)
     {
         scanf("%d",&a[i]);
         sum=sum+a[i];
     }
     avg=(float)sum/10;
     printf("Average of numbers stored in array=%f",avg);
    return 0;
}
