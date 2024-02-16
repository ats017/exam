#include<stdio.h>

int main(){
    int x, y, r, x1, y1;
    
    printf("enter x: ");
    scanf("%d", &x);
    printf("enter y: ");
    scanf("%d", &y);
    printf("enter r: ");
    scanf("%d", &r);
    printf("enter x1: ");
    scanf("%d", &x1);
    printf("enter y1: ");
    scanf("%d", &y1);

    int a = x1 - x;
    int b = y1 - y;
    int R = r * r;
    int A = a * a;
    int B = b * b;
    int S = A + b;

    if (S < R)
    {
        printf(" the point (x1,y1) is inside the circle");
    }
    else if (S = R)
    {
        printf("the point (x1,y1) is in the circle");
    }
    else
    {
        printf("the point (x1,y1) is outside the circle");
    }

    return 0;   
}
