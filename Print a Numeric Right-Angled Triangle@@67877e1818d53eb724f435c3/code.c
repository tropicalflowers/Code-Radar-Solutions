#include <stdio.h>
int main()
{
    int a;
    
    scanf("%d", &a);
    for(int i=1; i<=a; i++)
    {
        int b=1;
        while(b<=i)
        {

            printf("%d", b);
            b++;
        }
        printf("\n");
       
    }
     
}