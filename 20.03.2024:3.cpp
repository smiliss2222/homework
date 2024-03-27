#include <iostream>
int main()
{
	int a = 0;
	for (int i = 0; i<1001; i++)
	{
		a = a + i;
	}
	std::cout << a / 1000;
	return 0;
}

