 #include<stdio.h>
 #include<limits.h>
int main()
{
    int n,i,j,temp;
    printf("Enter number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers=",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0,j=n-1;i<j;i++,j--)
    {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
    }
    printf("array in reverse order=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
     getch();
    return 0;
}
