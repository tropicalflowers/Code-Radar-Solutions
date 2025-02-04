#include <stdio.h>
int main()
{
    int a,b;
    char c;
    int sum;
    int minus;
    int multiply;
    int divide;
  
    scanf("%d %d %c", &a, &b, &c);
   
    sum=a+b;
    minus=a-b;
    multiply=a*b;
    divide=a/b;

    switch(c)
    {
        case '+':
        printf("%d", sum);
        break;
        case '-':
        printf("%d", minus);
        break;
        case '*':
        printf("%d", multiply);
        break;
        case '/':

        printf("%d", divide);
        break;
       

    }
    return 0;
}