#include <stdio.h>

int main()
{
    char s[100];
    scanf("%s", s);

    int gap = -1;
    int current = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '-')
        {
            current++;
        }
        else
        {
            if (gap == -1)
            {
                gap = current;
            }
            else
            {
                if (current != gap)
                {
                    printf("NO\n");
                    return 0;
                }
            }

            current = 0;
        }
    }

    printf("YES\n");

    return 0;
}