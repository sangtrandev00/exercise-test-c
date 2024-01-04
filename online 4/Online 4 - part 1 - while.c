#include <stdio.h>
int main ()
{
	// Demo vong lap do...while
	// do...while: thuc thi truoc than vong lap, sau do moi kiem tra dieu kien
	// do while: than vong lap, it nhat se duoc thuc thi it nhat 1 lan
	// yeu cau nguoi dung nhap vao diem: Biet rang, diem 0 -> 10
	// trong khi diem: <0 || > 10 thi yeu cau nhap lai
	float diem;
	do {
		printf("Xin moi nhap vao diem: ");
		scanf("%f",&diem);
		}
		while (diem < 0 || diem > 10);
		printf("Ban da nhap diem chinh xac");
}
