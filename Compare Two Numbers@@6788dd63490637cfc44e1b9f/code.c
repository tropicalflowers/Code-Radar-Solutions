#include <stdio.h>
int main() {
   int a,b;
   scanf("%d %d", &a,&b);
   if (a>b) printf("First");
   else if(a<b) printf("Second");
   else if(a==b) printf("Equal");
   

    return 0;
}