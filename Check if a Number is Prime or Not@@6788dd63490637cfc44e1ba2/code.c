#include <stdio.h>
int main() {
    int a;
    int i;
    int b=0;
    scanf("%d", &a);
    for (i=2; i<=a/2; i++)
    {
        if (a%i==0)  
        {
            b=1;
            break
        }
        
    }
    if (b==1) printf("Prime");
    else printf("Not Prime");
    return 0;
}