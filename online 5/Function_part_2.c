#include<stdio.h>
#include<math.h>

void hoanvi (int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	}
int main() {
	int so1 = 300;
	int so2 = 500;
	printf("Gia tri cua so 1 truoc khi hoan vi: %d\n",so1);
	printf("Gia tri cua so 2 truoc khi hoan vi: %d\n",so2);
	hoanvi ( &so1, &so2);
	printf("Gia tri cua so 1 sau khi hoan vi: %d\n",so1);
	printf("Gia tri cua so 2 sau khi hoan vi: %d\n",so2);
	return 0;
}




