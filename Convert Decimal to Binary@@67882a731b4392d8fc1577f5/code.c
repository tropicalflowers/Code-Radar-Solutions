#include <stdio.h>
int main() {
    
    int a;
    int binary[32];
    int i=0;
    scanf("%d", &a);
    if (a==0)
    {
        printf("0");
        return 0;
    }
    while num>0
    {
        binary[i++]=num%2;
        num=num/2;
    }
    for (int j=i-1; j>=0; j--)
    {printf("%d", binary[j])}
    return 0;
}