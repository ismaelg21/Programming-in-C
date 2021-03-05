#include <stdio.h>

int gcd(int u, int v)
{
    int temp;

    while (v != 0){
        temp = u % v;
        u = v;
        v = temp;
    }
    return u;
}

int lcm(int u, int v)
{
    int lcm = u * v / gcd(u , v);

    return lcm;
}

int main() {

    int x, u = 15, v = 10;

    x = lcm(u, v);

    printf("%i", x);

    return 0;
}
