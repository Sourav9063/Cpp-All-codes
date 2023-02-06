
#include <stdio.h>

unsigned long long int mod(unsigned long long int a, unsigned long long int n, unsigned long long int m)
{
    unsigned long long int x = 1, y = a;
    int tempMod = 0;
    int tempMod2 = 0;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            tempMod = (x * y) % m;
            x = tempMod;
            if (tempMod == 1) {
                break;
            }
        }
        tempMod2 = (y * y) % m;
        y = tempMod2;
        n = n / 2;
        if (tempMod2 == 1) {
            break;
        }

        printf("x = %llu, y = %llu, n = %llu \n", x, y, n);
    }
    return x % m;
}



int main()
{
    unsigned long long int n, m, a;

    unsigned long long int result = 1;
    printf("Enter the power and modulus: ");
    scanf("%llu %llu", &n, &m);

    printf("The result is %llu", mod(2, n, m));
    return 0;
}