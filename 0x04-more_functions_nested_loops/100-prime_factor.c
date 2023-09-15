#include <stdio.h>

int main() {
    long long n = 612852475143;
    while (n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }

    for (long long i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%lld ", i);
            n = n / i;
        }
    }

    if (n > 2) {
        printf("%lld ", n);
    }

    return 0;
}
