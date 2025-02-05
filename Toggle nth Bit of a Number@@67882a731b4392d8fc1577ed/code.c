#include <stdio.h>
int nbit(int num, int n)
{
    return num^(1<<n);
}
int main() {
    int num,n;
    scanf("%d %d", &num, &n);
    int result=nbit(num,n);
    printf("%d", result);
    
    return 0;
}