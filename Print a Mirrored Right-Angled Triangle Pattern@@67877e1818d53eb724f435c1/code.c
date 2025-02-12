#include <stdio.h>

int main() {
    int a, i, j;
    // Prompt the user to enter the number of
    scanf("%d", &a);

    // Outer loop for each row
    for (i = a; i >= 1; i--) {
        // Inner loop to print stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }
    return 0;
}
