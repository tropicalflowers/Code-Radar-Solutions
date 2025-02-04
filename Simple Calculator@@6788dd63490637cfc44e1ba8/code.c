#include <stdio.h>
int main()
{
    int a;
    int b;
    char c;
    int d;
    scanf("%d %d %c", &a, &b, &c);
    switch(c)
    {
        case '+':
        d=a+b;
        printf("%d", d);
        break;
        case '-':
        d=a-b;
        printf("%d", d);
        break;
        case '*':
        d=a*b;
        printf("%d", d);
        break;
        case '/':
        d=a/b;
        printf("%d", d);
        break;
    }
    return 0;
}