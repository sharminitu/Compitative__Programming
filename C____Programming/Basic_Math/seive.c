#include <stdio.h>
#include <stdbool.h>

void sieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize all entries as true
    // A value in prime[i] will be false if i is not a prime, and true if i is a prime
    bool prime[n + 1];
    for (int i = 0; i <= n; i++)
    {
        prime[i] = true;
    }

    prime[0] = prime[1] = false; // 0 and 1 are not prime numbers

    // Loop to find primes
    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is still true, then it is a prime
        if (prime[p])
        {
            // Update all multiples of p to false, starting from p^2
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }

    // Print all prime numbers
    printf("Prime numbers up to %d are: \n", n);
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int n;

    // Input number up to which primes are to be found
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calling the sieve function
    sieveOfEratosthenes(n);

    return 0;
}