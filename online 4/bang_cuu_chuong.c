#include<stdio.h>
int main ()
{	
	printf("In ra bang cuu chuong tu 1 den 10");
	int i,j;
	for (i=1;i<=10;i++) {
		for (j=1;j<=10;j++)
		{
			printf(" %d x %d = %d \n",i,j,i*j);
		}
		printf("\n");
	}

	return 0;
}
