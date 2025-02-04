#include <stdio.h>
int main()
{
    int a,b;
    char c;
    
  
    scanf("%d %d %c", &a,&b,&c);
    int sum;
    sum=a+b;
    switch(c)
    {
        case '+':
        printf("%d", sum)
        break;
    }
}