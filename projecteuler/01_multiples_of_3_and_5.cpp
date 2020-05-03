/*
 * 2020 UPDATE: This problem was submitted "4 years ago," or sometime around
 * 2016.
 */

// Project Euler #1: Multiples of 3 and 5
// [http://bit.ly/1WO1tpf]

#include <iostream>

// Returns number of multiples of lowest_multiple *BELOW* N
long long num_multiples(long long N, long long lowest_multiple)
{
    long long m = N / lowest_multiple;
    if (N % lowest_multiple == 0) m--;
    return m;
}

long long triangular_number(long long n)
{
    return (n * (n+1)) / 2;
}

int main(int argc, char *argv[])
{
    int num_cases;
    std::cin >> num_cases;

    for (int c = 0; c < num_cases; c++)
    {
        long long N;
        std::cin >> N;

        long long num_multiples3 = num_multiples(N, 3);
        long long num_multiples5 = num_multiples(N, 5);

        long long sum = triangular_number(num_multiples3) * 3 +
          triangular_number(num_multiples5) * 5;

        // To remove duplicate multiples, subtract sum of all multiples of 15
        // below N
        long long num_multiples15 = num_multiples(N, 15);
        sum -= triangular_number(num_multiples15) * 15;

        std::cout << sum << std::endl;
    }
}

