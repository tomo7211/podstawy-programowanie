#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
	f = fopen("C:/Users/Tomasz/Desktop/tomo1.txt", "a+t");
	if(!f)
	{
		perror("Problem z plikiem");
		exit(1);
	}
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            fprintf(f,"%d\n",j*i);
        }
    }


    return 0;
}
