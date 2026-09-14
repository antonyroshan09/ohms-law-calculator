#include <stdio.h>

int main() {
    float current, resistance, voltage;

    printf("Enter current (A): ");
    scanf("%f", &current);

    printf("Enter resistance (Ohms): ");
    scanf("%f", &resistance);

    voltage = current * resistance;

    printf("Voltage = %.2f V\n", voltage);

    return 0;
}