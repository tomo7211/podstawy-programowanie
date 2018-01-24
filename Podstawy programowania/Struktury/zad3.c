#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
typedef struct wektor
{
    int r;
    bool z;
}W;
void zmiana(W *a)
{
    a->z=!a->z;
}
int main()
{
    W a={10,1};
    zmiana(&a);
    printf("%d\n%d",a.r,a.z );
    return 0;
}
