#include <stdio.h>
int nbit(int num, int n)
{
    return num^(1<<n);
}
int main() {
    int num,n;
    scanf("%d %d", &num, &n);
    int resuly=nbit(num,n);
    printf("%d", n,result);
    
    return 0;
}