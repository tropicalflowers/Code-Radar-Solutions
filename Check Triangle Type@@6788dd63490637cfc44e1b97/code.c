#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if (a==b==c) printf("Equilateral");
    else if (a==b || b==c || a==c ) printf("Isoscles");
    else if (a!=b && b!=c && c!=a) printf("Scalene");
    return 0;
}