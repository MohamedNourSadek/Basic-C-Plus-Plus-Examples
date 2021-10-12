#pragma once


// Simple recieve two numbers and output the sum
void SimpleIO()
{
	std::cout << "Give me two numbers";
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

//test loss of data in conversion
void Data_Conversion()
{
	float y = 1.99f;
	int z = y;

	std::cout << z;
}

void WeirdNaming()
{
	int _ = 2;
	std::cout << _;
}

void Using_References()
{
	int y = 50;
	int& z = y; //a reference must be initialized and can't be modified later
	z = 40;

	std::cout << y;
}

void Using_Pointer()
{
	int y = 40;
	int* p;
	p = &y;
	*p = 1;

	std::cout << y;
}

void Using_Auto()
{
	int i = 5;
	double j = 3.1;

	auto y = j + i;

	std::cout << y;
}

void Discover_type()
{
	int i = 1;
	decltype(i) y = 4;

	std::cout << y;

}

struct Test_DataType
{
	int x = 0;
	float y = 2;
};

void Testing_a_DataType()
{
	Test_DataType tests;
	std::cin >> tests.y;

	std::cout << "x is : " << tests.x << ", y is : " << tests.y;

}


