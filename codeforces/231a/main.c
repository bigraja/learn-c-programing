#include <stdio.h>

int main()
{
    int n, totalAns = 0;

    scanf("%d", &n);

    while (n--)
    {
        int petya, vasya, tonya;

        scanf("%d %d %d", &petya, &vasya, &tonya);

        if ((petya + vasya + tonya) >= 2)
        {
            totalAns++;
        }
    }

    printf("%d", totalAns);
}