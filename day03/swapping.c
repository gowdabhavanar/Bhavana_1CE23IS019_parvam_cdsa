#include<stdio.h>
void swap(int*,int*);
int main()
{
    int x=0,y=0;
    scanf("%d%i",&x,&y);
    printf("before the  swap %d and %i",x,y);
    swap(&x,&y);
    printf("after the swap  %d and %i",x,y);
    return 0;
}
void swap(int*x,int*y)
{
    int t=*x;
    *x=*y;
    *y=t;
}