#include <iostream>

int main()
{


	int x = 0;
	std::cin >> x;
	return 0;
}



// Simple recieve two numbers and output the sum
void SimpleIO()
{
	std::cout << "Give me two numbers bitch";
	std::cout << std::endl;

	int x = 0;
	int y = 0;

	std::cin >> x;
	std::cin >> y;
	std::cout << "The sum is : " << x * y;


}

// While app (sum numbers from 50 to 100)
void While_App1()
{
	int y = 50;
	int sum = 0;
	while (y <= 100)
	{
		sum += y;
		y++;
	}

	std::cout << "sum is : " << sum;
}

//While App (Show Numbers between a range entered by the user
void While_App2()
{
	std::cout << "Enter the first number: ";
	int y = 0; int z = 0;
	std::cin >> y;
	std::cout << "Enter the second number : ";
	std::cin >> z;

	int range = z - y;

	while (range >= 0)
	{
		std::cout << "Number is: " << z - range << "\n";
		range--;
	}

}

void For_App()
{
	int sum = 0;
	for (int y = 0; y <= 3; y++)
		sum += y;
	std::cout << sum;

}