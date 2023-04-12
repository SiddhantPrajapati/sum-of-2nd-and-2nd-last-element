//WAP to print sum of second and second last element of array
#include<stdio.h>
int main()
{
    int a[10],n,i,sum;
    printf("enter the number of element of array=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter number=");
        scanf("%d",&a[i]);
    }
    sum=a[1]+a[n-2];
    printf("sum=%d",sum);
    return 0;
}
