// Score: 80.00 out of 100 points

#include <iostream>

int main(int argc, char *argv[])
{
    int num_cases;
    std::cin >> num_cases;

    for (int t = 0; t < num_cases; t++)
    {
        int sum;
        std::cin >> sum;

        int product = -1;
        for (int a = 1; a <= sum / 3; a++)
        {
            for (int b = a + 1; b <= sum / 2; b++)
            {
                int c = sum - (a + b);
                if (c < a && c < b) break;
                if ((a * a) + (b * b) == (c * c)) product = a * b * c;
            }
        }

        std::cout << product << std::endl;
    }
}
