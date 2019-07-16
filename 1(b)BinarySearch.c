#include<stdio.h>
int n;
int binsearch(int a[20],int key)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
            return mid;
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
main()
{
    int key,i,pos,a[20];
    printf("Enter size\n");
    scanf("%d",&n);
    printf("Enter array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter key\n");
    scanf("%d",&key);
    pos=binsearch(a,key);
    if(pos==-1)
        printf("\nNot Found\n");
    else
        printf("Found at pos %d",pos+1);
}
