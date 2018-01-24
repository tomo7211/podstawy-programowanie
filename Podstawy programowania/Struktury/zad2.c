#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct punkt
{
    float x;
    float y;
    float z;
}P;
float odle(P a,P b)
{

    float wynik = sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
    return wynik;
}
int main()
{
    P a={1,2,3};
    P b={2,3,4};
    printf("%f\n", odle(a,b));

	return 0;
}
