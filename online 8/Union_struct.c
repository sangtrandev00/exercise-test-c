#include <stdio.h>
#include <string.h>
union Sach {
    int maSach;
    char tenSach[100];
    float donGia;
} sach1;

struct SinhVien 
{
    /* data */
    int maSV;
    char tenSV[100];
    float hocPhi;
}sv1;

int main() {
    printf("Kich thuoc cua Sach1: %d\n ",sizeof(sach1));
    printf("Kich thuoc cua sv1: %d\n",sizeof(sv1));
    sv1.maSV= 100;
    strcpy ( sv1.tenSV, "tran nhat Sang");
    sv1.hocPhi = 10000000;
    printf("Thong tin sinh vien !\n");
    printf("Ma so: %d\n Ten SV: %s\n Hoc Phi: %.f VND \n",sv1.maSV,sv1.tenSV ,sv1.hocPhi );
    sach1.maSach = 100;
    printf("Ma sach: %d \n",sach1.maSach );
    strcpy(sach1.tenSach,"Lap trinh can ban");
    printf("Ten sach: %s \n",sach1.tenSach );
    sach1.donGia = 10000000;
    printf("Don gia: %.f",sach1.donGia );
    return 0;
}

