#include <stdio.h>

int main() {
    int a, i, j;
    // Prompt the user to enter the number of rows for the triangle
    printf("Enter the number of rows: ");
    scanf("%d", &a);

    // Outer loop for each row
    for (i = 0; i < a; i++) {
        // Inner loop to print spaces
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        // Inner loop to print stars
        for (j = 0; j < a - i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }
    return 0;
}
