#include <stdio.h>

int fibo();

int main(){
	int n;
	
	printf("Ciag Fibonacciego:\n");
	printf("Podaj n.\n");
	scanf("%d",&n);

	
	printf("Wartosc %d. ciagu fibonacciego wynisi %d.\n",n,fibo(n));
	
	return 0;
}

int fibo(int n)
{
	if(n==0)	return 0;
	else if(n==1)	return 1;
	else	return fibo(n-2)+fibo(n-1);

}
