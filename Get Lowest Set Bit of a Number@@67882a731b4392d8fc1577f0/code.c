#include <stdio.h>

int lowestbit(int num) {
    if(num==0){
        return  -1;
    }
    return __builtin_ffs(num) - 1;
  
}

int main() {
    int num;
    scanf("%d", &num);
    int position=lowestbit(num);
    if (position=-1){
        printf("0");
    } else{
        return 1;
    }
    return 0;
}