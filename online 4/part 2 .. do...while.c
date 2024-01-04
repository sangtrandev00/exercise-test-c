#include <stdio.h>
int main ()
{
	int so = 0, tong = 0;
	printf("Xin moi nhap so duong: ");
	
	do {
		scanf("%d",&so);
		tong += so;
	}
	while ( so < 0);
	return 0;
}
