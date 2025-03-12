#include <stdio.h>
int main() {
    int a;
  
    scanf("%d", &a);

    // Upper half of the diamond
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a - i; j++) { // Print spaces
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) { // Print stars
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = a - 1; i >= 1; i--) {
        for (int j = 1; j <= a - i; j++) { // Print spaces
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) { // Print stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
