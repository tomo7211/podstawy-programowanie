#include <stdio.h>
#include <stdlib.h>
typedef struct kont
{
    int a;
    int b;
    int c;
}t;
int fun(t a)
{
    return a.a+a.b+a.c;
}
int main()
{
    t a={1,2,3};
    printf("%d",fun(a));
    return 0;
}
