#include <stdio.h>

int main (void)
{
    int i, j, n = 150;

    // Step 1: Define an array of integers P and set all elements to 0.
    int P[n];
    for(i = 0; i < n; i++)
        P[i] = 0;

    // Step 2: Set i to 2.
    i = 2;

    // Step 3: If i > n, the algorithm terminates
    while(i <= n){
        j = i;

        // Step 5: For all j such that i x j <= n set element number i * j in P to 1
        while(i * j <= n){
            P[i * j] = 1;
            j++;
        }

        // Step 6: Add 1 to i and goto step 3
        i++;
    }

    // Step 4: If P[i] is 0, then i is prime.
    for (i = 2; i < n; i++){
        if (P[i] == 0)
            printf("%d ", i);
    }
    
    return 0;
}
