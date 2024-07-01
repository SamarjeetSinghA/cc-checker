#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long int a = 0;
    long int b = 0;
    int counter = 1;
    long int n = get_long("Number: ");
    long int m = n;
    long int l = n;
    int firsttwo = 0;
    while (m > 0)
    {
        int d = m % 10;
        if (counter % 2 == 0)
        {
            if (d * 2 > 9)
            {
                int sum = (d * 2) - 9;
                a = a + sum;
            }
            else
            {
                a = a + (d * 2);
            }
        }
        else
        {
            b = b + d;
        }
        counter++;
        m = m / 10;
    }
    long int total = a + b;
    if (total % 10 == 0)
    {
        int len = 0;
        while (l != 0)
        {
            if (l > 9 && l < 100)
            {
                firsttwo = l;
            }
            l = l / 10;
            len++;
        }
        if (len == 15 && (firsttwo == 34 || firsttwo == 37))
        {
            printf("AMEX\n");
        }
        else if (len == 13 && firsttwo / 10 == 4)
        {
            printf("VISA\n");
        }
        else if (len == 16)
        {
            if (firsttwo / 10 == 4)
            {
                printf("VISA\n");
            }
            else if (firsttwo >= 51 && firsttwo <= 55)
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
