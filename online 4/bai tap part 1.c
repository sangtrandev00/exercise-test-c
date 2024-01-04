#include<stdio.h>
int main ()
{
	int i = 1, tong; // tai sao tong o day lai luu bien co gia tri bang 1
	while (tong < 5) {
		tong += i;
		i ++;
	}
	printf("%d", tong);
}
