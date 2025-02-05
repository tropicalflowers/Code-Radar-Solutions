#include <stdio.h>
int zero(int num) {
if (num==0)
{return 32;}
int  count=0;
while ((num & 1)==0)
{
    count ++;
    num>>=1;

}
return count;
}

int main() {
    int num;
    scanf("%d", &num);
    int result=zero(num);
    printf("%d", result);
    return 0;
}