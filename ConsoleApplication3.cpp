// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int a;
    int s=0;
    std::cin >> a;
    for (a; a < 500; a++)
    {
        s = s + a;
    }
    std::cout << s;
}

