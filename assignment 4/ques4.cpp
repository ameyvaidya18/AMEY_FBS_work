#include <stdio.h>
int main()
{
    int i, j, sum, rem, n = 150000, fact, temp;

    for(i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;

        while(temp > 0)
        {
            fact = 1;
            rem = temp % 10;  

            for(j = 1; j <= rem; j++) 
            {
                fact = fact * j;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if(sum == i)
            printf("%d\n", i);
    }

    return 0;
}

