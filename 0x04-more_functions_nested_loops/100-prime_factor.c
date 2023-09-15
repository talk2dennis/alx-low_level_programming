#include <stdio.h>
#include <math.h>

int main() {
    long long n = 612852475143;
    long long max = -1;

    while (n % 2 == 0) {
        max = 2;
        n /= 2;
    }

    for (long long i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            max = i;
            n = n / i;
        }
    }

    if (n > 2) {
        max = n;
    }

    printf("%lld\n", max);

    return 0;
}
