 #include<stdio.h>
 #include<limits.h>
int main()
{
    int i,j,min=INT_MAX,smin=INT_MAX,a[10];
    printf("Enter 10 numbers=");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(min>a[i])
            min=a[i];

    }
    for(i=0;i<10;i++)
    {
            if(a[i]!=min&&smin>a[i])
                smin=a[i];
    }
     printf("Second smallest number in array=%d",smin);
     getch();
    return 0;
}
