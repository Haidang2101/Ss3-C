#include <stdio.h>

int main() {
    char ten[50]; 
    
    printf("Hay nhap ten cua ban: ");
    fgets(ten, sizeof(ten), stdin);
    
    printf("Xin chao %s!\n", ten);

    return 0;
}
