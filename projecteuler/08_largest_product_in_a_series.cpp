/*
 * 2020 UPDATE: This problem was submitted "6 years ago," or sometime around
 * 2014.
 */

#include <iostream>
using namespace std;

long long get_square_sums(long long n) {
  long long sum = 0;
  for (long long i = 1; i <= n; i++) sum += i;
  return sum * sum;
}

long long get_sum_squares(long long n) {
  long long sum = 0;
  for (long long i = 1; i <= n; i++) sum += (i * i);
  return sum;
}

int main(int argc, char *argv[]) {
  int num_cases;
  cin >> num_cases;

  for (int c = 0; c < num_cases; c++) {
    long long n; cin >> n;
    long long square_sums = get_square_sums(n);
    long long sum_squares = get_sum_squares(n);

    cout << square_sums - sum_squares << endl;
  }
}
