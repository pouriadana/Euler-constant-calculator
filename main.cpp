#include <iostream>

int main()
{
	std::cout << "Enter desired accuracy: ";
	int accuracy;
	std::cin >> accuracy;

	double e{ 1.00 };
	int sentinel{ 1 };

	while (sentinel <= accuracy)
	{
		unsigned long long factorial{ 1 };
		int fController{ sentinel }; // used for calculating factorial
		while (fController > 1)
		{
			factorial *= fController;
			fController--;
		}

		e += 1.00 / factorial; // 1.00 for yielding floating-point after division
		sentinel++;
	}
	std::cout << "e: " << e << "\n";
}
