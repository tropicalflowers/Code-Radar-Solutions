#include <stdio.h>
int main()
{
    char a;
    scanf ("%c", &a);
    switch(a)
    {
        case 'R':
        printf("Stop");
        break;
        case 'G':
        printf("Go");
        break;

    }
    return 0;
}