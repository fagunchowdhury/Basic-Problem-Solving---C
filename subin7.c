#include <stdio.h>

int main()
{
    char chr;
    scanf("%c", &chr);

    if(chr == '1' || chr == '2' || chr == '3' || chr == '4' || chr == '5' || chr == '6' || chr == '7' || chr == '8' || chr == '9'){
        printf("Digit");
    }
    else printf("not a digit");

    return 0;
}
