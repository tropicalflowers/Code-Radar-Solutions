#include <stdio.h>
#include <limits.h>
int leading(int num) {
    if (num==0)
    {return 32;}
    in count =0;
    for (int i==sizeof(int)*CHAR_BIT -1; i>=0; i--){
        if (num &(1 <<i)==0)
        {
            count ++;}
            else
            {break;}
    }
return count;
}

int main() {
    int num;
    scanf("%d", num);
    int result=leading(num);
    printf("%d", num);
    return 0;
}