#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Celsius\tFahrenheit\n");
    for (celsius = 0; celsius <= 50; celsius += 10) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%.0f\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
