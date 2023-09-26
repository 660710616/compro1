#include <stdio.h>
void main()
{
    int count = 0, sum = 0, countmod = 0, K, x, y;
    int maxcount = 0, maxloop = 0;
    scanf("%d%d", &K, &y);
    for (int i = 1; i <= y; i++)
    {
        for (;;)
        {
            scanf("%d", &x);
            if (x == 0)
            {
                break;
            }
            else
            {
                if (x > 0)
                {
                    if (x % K == 0)
                    {
                        count = count + 1;
                    }
                }
            }
        }
            if (count >= maxcount)
            {
                maxcount = count;
                maxloop = i;
            }
            count = 0;
    }

    printf("%d %d", maxloop, maxcount);
}