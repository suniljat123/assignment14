 #include<stdio.h>
int main()
{
    int i,j,max=0,smax=0,a[10];
    printf("Enter 10 numbers=");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
            max=a[i];

    }
    for(i=0;i<10;i++)
    {
            if(a[i]!=max&&smax<a[i])
                smax=a[i];
    }
     printf("Second largest number in array=%d",smax);
     getch();
    return 0;
}
