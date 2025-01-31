#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    scanf("%s", &a);
    if (isalpha(a)) 
    {
        if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U') {printf("Vowel");

    }
    }
    else 
    {
        printf("Consonant");
    }
    else if(isdigit(a))
    {
        printf("Digit");
    }
    else {
        print("Special Character");
    }
    return 0;
}