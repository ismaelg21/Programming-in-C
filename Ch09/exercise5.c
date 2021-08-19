#include <stdio.h>

int findString(const char str1[], const char str2[]){
    int i, j, k;

    for (i = 0; str1[i] != '\0'; i++ ){

        for (j = i, k = 0; str1[j] != '\0' && str1[j] == str2[k]; j++, k++ )
            ;
        if (str2[k] == '\0')
            return i;
    }
    return -1;
}

int main() {

    printf("%i\n", findString("cartoon", "toon"));
    printf("%i\n", findString("cartoon", "car"));
    printf("%i\n", findString("cartoon", "cat"));

    return 0;
}
