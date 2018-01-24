#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
    FILE *f;
    f=fopen("d:/Users/PC/Desktop/pliczek.txt", "r+w" );
    if(!f)
    {
        perror("Problem z plikiem");
		exit(1);

    }
    FILE *fw;
    fw=fopen("d:/Users/PC/Desktop/Pliczek1.txt", "w" );
    if(!f)
    {
        perror("Problem z plikiem");
		exit(1);

    }
    char wiersz[6][512];
	int i = 0;
	while( fgets( wiersz[i], 512, f ) != NULL )
	{
	    printf( "%s", wiersz[i]);
	    i++;
	}


	for(i=5;i>=0;i--)
    {
        fprintf(fw,"%s",wiersz[i]);
    }
    printf("Hello world!\n");
    return 0;
}
