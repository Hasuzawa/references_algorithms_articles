#include <iostream>
#include <stdexcept>

//return sum of natural number up to n(inclusive), allow input 0
int sum_until(int n)
{
    if (n < 0)
    {
        throw std::invalid_argument("nagative n is not allowed, n: " + std::to_string(n));
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum_until(n-1);
    }
}

int main(int argc, char* argv[])
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int sum = 0;
    sum = sum_until(n);
    std::cout<< sum << std::endl;
    return 0;
}