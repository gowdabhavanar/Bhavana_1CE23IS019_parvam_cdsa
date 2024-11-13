#include<stdio.h>
struct s2{
    int a;
    double b;
};
int main()
{
    printf("%d",sizeof(struct s2));
    return 0;
}