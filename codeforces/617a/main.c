#include <stdio.h>

int main() 
{
    long int n;
    scanf("%ld", &n);

    // ৫ দিয়ে ভাগ করে ভাগশেষ থাকলে ১ যোগ হবে
    long int step = (n + 4) / 5;

    printf("%ld\n", step);

    return 0;
}