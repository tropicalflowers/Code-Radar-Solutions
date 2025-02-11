#include <stdio.h>

int main() {
    int i, j, N;
    
    // Number of rows for the inverted triangle
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    
    // Outer loop for each row
    for (i = N; i >= 1; i--) {
        // Inner loop to print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}
