#include <iostream>
int main()
{
    setlocale(LC_ALL, "RU");
    int a,x =1;
    std::cout << "Введите число в пределах от 1 до 20:";
    std::cin >> a;
    if (a > 0 || a < 21)
    {
        for (int i = a; i < 21; i++)
        {
            x = x * i;
        }
        std::cout << x;
    }
    else 
    {
        std::cout << "число не находится в пределах от 1 до 20";
    }
}
