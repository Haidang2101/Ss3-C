#include <stdio.h>

int main() {
    float canh_day, chieu_cao, dien_tich;
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &canh_day);
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &chieu_cao);
    dien_tich = (canh_day * chieu_cao) / 2;
    printf("Dien tich cua tam giac la: %g\n", dien_tich);

    return 0;
}

