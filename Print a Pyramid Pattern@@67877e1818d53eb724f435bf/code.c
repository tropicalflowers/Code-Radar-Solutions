#include <stdio.h>

int main() {
    int rows, i, j, k;

    // Prompt the user to enter the number of rows for the pyramid
    
    scanf("%d", &rows);

    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Print spaces to center-align the pyramid
        for (j = i; j < rows; j++) {
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
