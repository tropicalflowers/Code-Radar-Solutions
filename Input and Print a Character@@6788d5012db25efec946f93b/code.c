#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());
    char str[100];
    scanf("%s", &str);
    printf("You entered: %s", str)
    return 0;
}