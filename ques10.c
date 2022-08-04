  #include<stdio.h>
 #include<limits.h>
int main()
{
    int n,i,j,temp;
    printf("Enter number of elements=");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter %d numbers=",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
            b[i]=a[i];
    printf("Arrary A copied to Array B=");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
     getch();
    return 0;
}
