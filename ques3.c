#include<stdio.h>
int main()
{
    int i,sumodd=0,sumeven=0,a[10];
    float avg;
    printf("Enter 10 numbers=");
    for(i=0;i<10;i++)
     {
         scanf("%d",&a[i]);
         if(a[i]%2)
            sumodd=sumodd+a[i];
        else
            sumeven=sumeven+a[i];
     }
     printf("Sum of odd numbers stored in array=%d\n",sumodd);
     printf("Sum of even numbers stored in array=%d\n",sumeven);
    return 0;
}
