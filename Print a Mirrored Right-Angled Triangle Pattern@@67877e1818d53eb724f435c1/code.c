#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for(int i=a; i<=a; i--)
    {
        if (i>i-a){
            printf(" ");
        }
        else {
            printf("*");
        }
        printf("/n");
    }
}