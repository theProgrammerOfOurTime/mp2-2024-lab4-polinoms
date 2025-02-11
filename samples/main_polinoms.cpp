#include <iostream>
#include "polinom.h"

using namespace std;

int main()
{
	std::cout << "Enter the polynomial as follows: the coefficient before the monomial and the powers of x, y, and z, separated by a space." << std::endl;
	std::cout << "You don't need to write * and + and variable names." << std::endl;
	std::cout << "Example:" << std::endl;
	std::cout << "4.5 * x^1 * y^3 * z^4 + 5.6 * x^1 * y^2 * z^3 == ";
	std::cout << "4.5 1 3 4 5.6 1 2 3" << std::endl;
	std::cout << "Enter the first polynomial: ";
	polinom p;
	try
	{
		std::cin >> p;
		std::cout << "Select an action: " << std::endl;
		int num;
		do
		{
			std::cout << "1. p1 = p1 + p2" << std::endl;
			std::cout << "2. p1 = p1 - p2" << std::endl;
			std::cout << "3. p1 = p1 * p2" << std::endl;
			std::cout << "4. p1 = alpha * p1" << std::endl;
			std::cout << "5. calculating p1 in (x, y, z)" << std::endl;
			std::cout << "6. exit" << std::endl;
			std::cin >> num;
			num--;
			polinom p1;
			if (num == 0)
			{
				std::cout << "Enter the second polynomial: ";
				std::cin >> p1;
				p = p1 + p;
				std::cout << p << endl;
			}
			else if (num == 1)
			{
				std::cout << "Enter the second polynomial: ";
				std::cin >> p1;
				p = p - p1;
				std::cout << p << endl;
			}
			else if (num == 2)
			{
				std::cout << "Enter the second polynomial: ";
				std::cin >> p1;
				p = p * p1;
				std::cout << p << endl;
			}
			else if (num == 3)
			{
				std::cout << "Enter the alpha: ";
				double alpha;
				std::cin >> alpha;
				p = p * alpha;
				std::cout << p << endl;
			}
			else if (num == 4)
			{
				std::cout << "Enter the x, y and z: " << std::endl;
				double x, y, z;
				std::cout << "x = ";
				std::cin >> x;
				std::cout << std::endl;
				std::cout << "y = ";
				std::cin >> y;
				std::cout << std::endl;
				std::cout << "z = ";
				std::cin >> z;
				std::cout << std::endl;
				std::cout << p.calc(x, y, z) << std::endl;
			}
			else if (num != 5)
			{
				throw std::exception("incorrect operation number");
			}
			std::cout << std::endl;
		} while (num != 5);
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (const std::logic_error& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "errors" << std::endl;
	}
	return 0;
}