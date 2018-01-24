#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
	f = fopen("C:/Users/Tomasz/Desktop/tomo1.txt", "r");
	if(!f)
	{
		perror("Problem z plikiem");
		exit(1);
	}
    FILE *fw;
    fw = fopen("C:/Users/Tomasz/Desktop/ok.txt", "w");
	if(!f)
	{
		perror("Problem z plikiem");
		exit(1);
	}
    char c;
    int i=0;
	while((c = fgetc(f))!=EOF)
		{
		    i++;
		    printf("%c", c);
		    fprintf(fw,"%c",c);
		}
    printf("%d\n",i);
    return 0;
}
