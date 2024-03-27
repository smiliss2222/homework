#include <iostream>

int main()
{
	int v = 0;
	for (int i = 100; i < 1000; i++)
	{
		int a = i % 1000 / 100;
		int b = i % 100 / 10;
		int c = i % 10;
		if (a == b or a == c or b == c)
		{
			v = v++;
		}
	}
	std::cout << v;
	return 0;
}
