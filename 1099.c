#include <stdio.h>
int main()
{
    int N,I;
    scanf("%d", &N);

    while (N--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int sum = 0;
        int start, end;

        if (a < b)
        {
            start = a;
            end = b;
        }
        else
        {
            start = b;
            end = a;
        }

        for ( I = start + 1; I < end; I++)
        {
            if (I % 2 != 0)
            {
                sum += I;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
