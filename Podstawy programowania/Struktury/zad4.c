#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct zes
{
    float x;
    float y;
}Z;
float mod(Z a)
{
    float wynik = sqrt((a.x*a.x)+(a.y*a.y));
    return wynik;
}
Z mno(Z a,Z b)
{
    Z m = {a.x*b.x-a.y*b.y, a.x*b.y+b.x*a.y};
    return m;
}
Z sum (Z a, Z b)
{
 Z m={a.x+b.x,a.y+b.y};
 return m;
}
int main()
{
    Z a={1,1};
    Z b={2,3};
    float z=mod(a);
    Z n=mno(a,b);
    Z m=sum(a,b);

    printf("Modul %f\n",z);
    printf("Mno¿enie %f %f\n",n.x,n.y);
    printf("Suma %f %f\n",m.x,m.y);
    return 0;
}
