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

    short int h = 2432; // 2 bytes (-32,768 to + 32,767) %d can just call short
    unsigned short int i = 65432; // 2 bytes (0 to +65353) %d

    int j = 43234543; // %d
    unsigned k = 654325432; // %u

    long long int l = 98765432765432; // (9 quintillion) %lld
    unsigned long long int m = 1234567654242; // %llu


    printf("%0.6f\n", c); //0.000 just display decimal
    printf("%d\n", e);
    printf("%d\n", f);
    printf("%d\n", g);
}