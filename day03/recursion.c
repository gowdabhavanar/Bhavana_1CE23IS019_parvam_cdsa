#include<stdio.h>
int main()
{
    int x=15,y=27;
    long r=0;
    scanf("%d%i",&x,&y);
    for(;y>0;r+=x,y--);
    printf("product=ld",r);
    return 0;
    
}