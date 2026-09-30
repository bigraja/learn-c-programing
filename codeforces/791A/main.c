#include <stdio.h>

int main()
{

    int a = 0, b =0, year = 0;
    scanf("%d %d", &a, &b);

    while(1)
    {
        if(a>b) break;

        a = a * 3;
        b = b * 2;
        year++;
    }

    printf("%d", year);
}
