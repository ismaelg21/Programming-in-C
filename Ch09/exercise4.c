#include <stdio.h>

void substring (const char source[], int start, int count, char result[] ){

    int i, j;

    for ( i = start, j = 0; j < count && source[i] != '\0'; ++i, ++j)
        result[j] = source[i];

    result[j] = '\0';
}

int main() {

    char res[20], text[] = "cartoon";
    int start = 3, count = 10;

    substring(text, start, count, res);
    printf("%s\n", res);

    return 0;
}
