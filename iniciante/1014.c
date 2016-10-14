#include <stdio.h>
 
int main() {
    int X;
    float Y, R;
    scanf("%i", &X);
    scanf("%f", &Y);
    R = X / Y;
    printf("%.3f km/l\n", R);
    return 0;
}