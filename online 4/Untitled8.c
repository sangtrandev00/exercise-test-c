#include <stdio.h>
int main ()
{
	// Lenh lap For
	int i;
	int n, s=0;
	// Tinh tong s = 1 + 2 + 3 + 4 + ... +n
	// voi n la mot so nguyen duoc nhap vao tu ban phim
	printf("xin moi nhap vao n:");
	scanf("%d",&n);
	
	for (i=0;i<=n;i++) {
		// than vong lap
			s += i;
	}
	printf("tong cua cac so la %d",s);
	return 0;
}
