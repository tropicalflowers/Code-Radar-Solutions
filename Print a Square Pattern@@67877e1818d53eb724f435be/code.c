#include <stdio.h>

int main() {
    int a, i, j, k;
    scanf("%d", &a);
    for (i = 1; i <= a; i++) {
        // Print spaces to center-align the pyramid
        for (j = i; j < a; j++) {
            printf(" ");
        }
        // Print stars to form the pyramid
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }
    return 0;
}
