#include<stdio.h>
int a[20],n,key;
int seq_search()
{
    int i;
    a[n]=key;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
            break;
    }
    if(i<n)
        return i;
    else
        return -1;
}
int main()
{
    int i,m;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter array \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter key \n");
    scanf("%d",&key);
    m=seq_search();
    if(m<0)
        printf("Not found\n");
    else
        printf("Found at %d\n",m+1);
    return 0;
}
