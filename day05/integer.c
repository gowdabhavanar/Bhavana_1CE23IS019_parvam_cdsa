#include<stdio.h>
int main()
{
    int n=0,i=0,a[1];
    scanf("%d",&n);
    for( i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    if(a[i]%5==0)
    printf("%d",a[i]);
    return 0;
}
    
