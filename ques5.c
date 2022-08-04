 #include<stdio.h>
int main()
{
    int i,min=0,a[10];
    printf("Enter 10 numbers=");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=0;i<10;i++)
     {
         if(a[i]<min)
            min=a[i];
     }
     printf("Minimum number stored in array=%d\n",min);
    return 0;
}
