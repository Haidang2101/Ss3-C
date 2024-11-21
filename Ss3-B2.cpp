#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%g do Celsius bang %g do Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
