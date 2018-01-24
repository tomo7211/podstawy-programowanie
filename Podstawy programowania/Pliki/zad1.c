#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
    FILE *f;
	f = fopen(argv[1], "r");
	if(!f)
	{
		perror("Problem z plikiem");
		exit(1);
	}
	char c;
	int i=0;
	while((c = fgetc(f))!=EOF)
		{
        printf("%c", c);
		i++;
		}
    printf("Liczba znaków\n%d",i--);
    return 0;
}
