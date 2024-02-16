#include<stdio.h>

int isComposite(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int num, found = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 4; i <= num / 2; i++) {
        if (isComposite(i) && isComposite(num - i)) {
            printf("%d %d\n", i, num - i);
            found = 1;
        }
    }

    if (!found) {
        printf("No pairs of composite numbers found that sum up to %d.\n", num);
    }

    return 0;
}