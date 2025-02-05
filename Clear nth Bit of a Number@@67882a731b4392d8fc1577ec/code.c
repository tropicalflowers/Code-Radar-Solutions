#include <stdio.h>
    int nbit(int num, int n);
    {
    int mask= ~(1 <<n);
    return num and mask;
    }
    int main()
    {
        int num,n;
        scanf("%d %d", &num, &n);
        int result=nbit(num,n);
        printf("%d %d", num,result);



    return 0;
}