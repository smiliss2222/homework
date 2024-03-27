#include <iostream>

int main()
{
	int a,b;
	std::cin >> a;
	std::cin >> b;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0) 
		{
			if (b % i == 0)
			{
				std::cout << i << "\n";
			}
			
		}
	}
}
