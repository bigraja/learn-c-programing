#include <stdio.h>

int main()
{
    int number = 0;
    int count;

    scanf("%d", &count);

    while (count--)
    {
        char oparation[10];

        scanf("%s", &oparation);

        if (oparation == "x++" || oparation == "++x")
        {
            number++;
        }
        else if (oparation == "x--" || oparation == "--x")
        {
            number--;
        }

       
    }

    printf("%d", number);
}