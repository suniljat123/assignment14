 #include<stdio.h>
int main()
{
    int i,j,temp,a[10];
    printf("Enter 10 numbers=");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
         for(j=i+1;j<10;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
     printf("Array in ascending order=");
     for(i=0;i<10;i++)
        printf("%d ",a[i]);
     getch();
    return 0;
}
