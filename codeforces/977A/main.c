#include <stdio.h>

int main()
{
    int a = 0, b =0;
    scanf("%d %d", &a, &b);

    while(b)
    {

        if(a%10)
        {
            a--;
        }
        else
        {
            a = a /10;
        }

        b--;
    }

    printf("%d", a);
}
