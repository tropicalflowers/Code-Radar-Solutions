#include <stdio.h>

int main() {
    int a,i,j,b;
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        for(j=1; j<=a; j++)
        {
            if(j=j-a)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
    }
    return 0;
}