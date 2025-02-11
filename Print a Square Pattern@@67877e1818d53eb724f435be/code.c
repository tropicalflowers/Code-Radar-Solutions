#include <stdio.h>

int main() {
    int a, i, j;
    // Prompt the user to enter the side length of the square
    
    scanf("%d", &a);
    
    // Loop through each row
    for (i = 1; i <= a; i++) {
        // Loop through each column in the row
        for (j = 1; j <= a; j++) {
            printf("* ");
        }
        // Move to the next line after printing each row
        printf("\n");
    }
    return 0;
}
