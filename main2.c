#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C';
    char b[] = "Noob";

    float c = 3.14567;
    double d = 3.1456789765437;

    bool e = true;

    char f = 100; // 1 byte from (-128 to + 127) %d or %c
    unsigned char g = 255; // 1 byte (0, +255) %d or %c

    int j = 2543543432;

    printf("%0.6f\n", c); //0.000 just display decimal
    printf("%d", e);
}