#include <iostream>

int main()
{
    int k;
    std::cin >> k;
    for (int i = 1; i < 10; i++)
    {
        std::cout << k << " * " << i << " = " << k * i << "\n";
    }
    return 0;
}

