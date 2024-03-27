#include <iostream>

int main()
{
    std::cout << "Введите число:";
    std::cout << "Введите степень:";
    int x, y,z=1;
    std::cin >> x;
    std::cin >> y;
    for (int i = 0; i < y; i++)
    {
        z = z * x;
    }
    std::cout << z;
    return 0;
}