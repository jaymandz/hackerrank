/*
 * 2020 UPDATE: This problem was submitted "6 years ago," or sometime around
 * 2014.
 */

#include <iostream>
using namespace std;

int get_gcd(int num1, int num2) {
  int n1 = num1, n2 = num2;

  int remainder = n1 % n2;
  while (remainder > 0) {
    n1 = n2;
    n2 = remainder;
    remainder = n1 % n2;
  }
  return n2;
}

int get_lcm(int num1, int num2) {
  return num1 * num2 / get_gcd(num1, num2);
}

int main(int argc, char *argv[]) {
  int num_cases;
  cin >> num_cases;

  for (int c = 0; c < num_cases; c++) {
    int n;
    cin >> n;

    int smallest_multiple = 1;
    for (int i = 2; i <= n; i++) {
      smallest_multiple = get_lcm(smallest_multiple, i);
    }

    cout << smallest_multiple << endl;
  }
}
