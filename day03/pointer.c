#include<stdio.h>
int main()
{
    int a[10]={7,0,2,2,2,4,2,0,0,6},*p=a;
    for(int i=0;i<10;i++);
    printf("%d\n",*p,p++);
    printf("afterloop:%d\n",*a);
    return 0;
}
