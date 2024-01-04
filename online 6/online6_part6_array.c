#include<stdio.h>
int main()
{
	int arr[6];
	// cach 1
	arr[0]=1;
	arr[1]=3;
	arr[2]=4;
	arr[3]=1;
	arr[4]=5;
	arr[0]=10;
	
	//cach 2;
	int i,n;
	printf("Xin moi nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		printf("xin moi nhap gia tri vao vi tri thu arr[%d] ",i);
		scanf("%d",&arr[i]);
	}
	return 0;
}
