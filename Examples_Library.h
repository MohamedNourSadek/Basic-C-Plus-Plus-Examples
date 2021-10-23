#pragma once
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;
 

// Simple recieve two numbers and output the sum s
void SimpleIO()
{
	std::cout << "Give me two numbers";
	std::cout << std::endl;

	int x = 0;
	int y = 0;

	std::cin >> x;
	std::cin >> y;
	std::cout << "The sum is : " << x + y;
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

void Test_Using()
{
	int x = 0;
	cout << "enter any thing";
	cin >> x;
	cout << x;
}

void Testing_String()
{
	string y = "test text";
	cout << y;
}

void getLine_String_functiontest()
{
	string s;
	std::getline(cin, s);

	if (s.empty())
		cout << "you didn't enter anything";
	else
		for (auto r : s)
			cout << r << "\n";

	cout << s.size();
}

void Vector_test()
{
	vector<int> v = { 1,2,3 };

	v.push_back(4);

	for (int i : v)
		cout << i << "\n";

	for (int i : v)
		cout << &i << "\n";
}

void Iterator_Test()
{
	vector<int> v = { 1, 2, 3 };

	auto it = v.begin();
	*it = 13;
	cout << *it;
	it++;
	cout << *it;

}

void Array_Test()
{
	int arr[] = { 1,2,3,4,5 };

	for (int i : arr)
		cout << i << "\n";
}

void Array_Pointers()
{
	int arr[] = { 1,2,3,4 };
	for (int i : arr)
		cout << &i << "\n";
}

//An expression that isn't guaranteed that it will compile i before i++ so, it could be (0,1) or (1,0).
void Undefined_Expression()
{
	int i = 0;
	cout << i << "," << i++;
}

void SizeOf_Test()
{
	vector<int> i = { 1,2,3 ,4,4,4,5,5,5,5,1,2,3 ,4,4,4,5,5,5,5};
	

	for (int x = 0; x <= i.size() - 1; ++x)
		cout << &i[x] << "\n";

	cout << sizeof(i);
}

void Explicit_Cat()
{
	int i = 3;
	cout << static_cast<double>(i) / 2;
}

void Switch_Test()
{
	int i = 0;
	char x;
	cin >> x;


	switch (x)
	{
	case 'i':
		i = 1;
		break;
	case 's':
		i = 2;
		break;
	default:
		i = 10;
		break;
	}

	cout << i;
}

void print(string s)
{
	cout << s;
}

//concept of using reference as an arguement
void negate(int& num)
{
	num = -num;
}
 
void Overload_x(string s)
{
	cout << s;
}
void Overload_x(int i)
{
	cout << i;
}

