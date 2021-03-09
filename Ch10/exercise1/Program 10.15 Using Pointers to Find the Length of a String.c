#include <stdio.h>

int stringLength (const char *string)
{
    const char *cptr = string;
    while (*cptr)
        cptr++;

    return cptr - string;
}

int main() {

    printf("%i   ", stringLength("stringLength test"));
    printf("%i   ", stringLength(""));
    printf("%i   ", stringLength("complete"));

    return 0;
}
