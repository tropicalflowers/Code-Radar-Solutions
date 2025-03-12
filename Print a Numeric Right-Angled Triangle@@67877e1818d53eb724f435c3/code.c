#include <stdio.h>
int main()
{
    int a;
    int b=1;
    scanf("%d", &a);
    for(int i; i<=a; i++)
    {
        while(b<=i)
        {

            printf("%d", b);
            b++;
        }
       
    }
     printf("\n");
}