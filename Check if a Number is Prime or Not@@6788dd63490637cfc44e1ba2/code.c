#include <stdio.h>
int main() {
    int a;
    int i;
    int b=0;
    scanf("%d", &a);
    for (i=2; i<a; i++)
    {
        if (a%i==0)  b=1;
        else if(a==2) b=1;
        else b=0;
    }
    if (b==1) printf("Prime");
    else printf("Not Prime");
    return 0;
}