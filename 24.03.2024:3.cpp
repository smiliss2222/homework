#include <iostream>

int main()
{
	int a,b=0,c,l=1;
	std::cin >> a;

	while(a>0)
	{
		c = a % 10;
		std::cout << c << "\n";
		if (c!= 3 && c!= 6)
		{
			if (b < 0)
			{
				b = c;
			}
			else 
			{
				b = b + c * l;
			}
			l = l * 10;
		}
		a = a / 10;
		
	}

	std::cout << b;
	return 0;
}
