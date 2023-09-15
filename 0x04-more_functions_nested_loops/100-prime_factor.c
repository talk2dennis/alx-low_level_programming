#include <stdio.h>

int isPrime(long long num) {
    if (num < 2) return 0; // Not a prime number
    if (num == 2) return 1; // 2 is prime
    if (num % 2 == 0) return 0; // Even numbers (except 2) are not prime

    for (long long i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0; // Found a divisor, not prime
    }

    return 1; // It's a prime number
}

int main() {
    long long num = 612852475143;
    long long largestPrimeFactor = 2; // Initialize with the smallest prime factor

    while (num > 1) {
        if (num % largestPrimeFactor == 0 && isPrime(largestPrimeFactor)) {
            num /= largestPrimeFactor;
        } else {
            largestPrimeFactor++;
        }
    }

    printf("%lld\n", largestPrimeFactor);

    return 0;
}
