#include <stdio.h>

void removeString(const char str[], int index, int num){
    char s[20];

    for (int i = 0, j = 0; str[i] != '\0'; i++, j++){

        if (i == index)
            i += num;

        s[j] = str[i];
    }

    printf("%s", s);
}

int main() {

    removeString("the wrong son", 4, 6);

    return 0;
}
