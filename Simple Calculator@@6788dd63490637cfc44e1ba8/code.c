#include <stdio.h>
int main()
{
    int a,b;
    char c;
    int sum;
  
    scanf("%d %d %c", &a,&b,&c);
    sum=a+b;
    switch(c)
    {
        case '+':
        printf("%d", sum)
        break;
    }
}