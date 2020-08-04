
#include <iostream>

int main()
{
	for (int i = 1; i < 101; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				std::cout << "fizz";
			}
			if (i % 5 == 0)
			{
				std::cout << "buzz";
			}
		}
		else
		{
			std::cout << i;
		}
		std::cout << std::endl;
	}
	return 0;
}

