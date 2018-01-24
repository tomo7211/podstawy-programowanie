#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct alko
{
 char nazwa[50];
 float volt;
 float ob;
}A;
A trucizna(A a,A b,A c)
{
 A w;
 float a1=a.volt*a.ob;
 float b1=b.volt*b.ob;
 float c1=c.volt*c.ob;
 if (a1>b1)
    {
    if (a1>c1)
        return a;
    else
        return c;
    }
 else if (b1>a1)
 {
     if (b1>c1)
        return b;
     else
        return c;
 }


}
int main()
{
    A f= {"Finlandia",0.4,900};
    A a= {"Absynt",0.51,700};
    A p= {"Per³a",0.05,2500};
    A w=trucizna(f,a,p);
    puts(w.nazwa);
    return 0;
}
