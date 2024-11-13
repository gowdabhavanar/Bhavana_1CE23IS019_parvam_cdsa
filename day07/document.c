#include<stdio.h>
void foo();
void bar(int);
int main()
{
    void(*P)()=&foo;
    printf("start of Main\n");
    foo(12);
    p();
    bar(12);
    bar(1);
    p();
    printf("\nend of Main\n");
    return 0;
}
void foo()
{
    printf("\nfoo func\n");
}
void foo(int x){
    printf("\nbar func %d\n",x);
}












