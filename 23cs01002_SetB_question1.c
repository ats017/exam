#include<stdio.h>

int main() {
    int r, h;

    printf("enter radius : ");
    scanf("%d", &r);

    printf("enter height : ");
    scanf("%d", &h);

    float a;
    a = 3.14 * r * h;

    printf("area = %.2f\n", a);

    return 0;
}