#include<stdio.h>
int main()
{
    int n,i,x,flag;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number into array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter thr element to be searched in the array: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("Element is found\n");
    else
    printf("Element is not found\n");

    return 0;
}

