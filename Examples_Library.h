//Example of preprocessors

#if  1
#pragma once
#include <iostream>
#include <string>
#include <vector>
#endif 


//Example of using
using namespace std;
 
//Examples of define
#define Debug(x) cout << x << endl;

// Simple recieve two numbers and output the sum s
void SimpleIO()
{
	Debug("Give me two numbers");

	int x = 0;
	int y = 0;

	cin >> x;
	cin >> y;
	cout << "The sum is : " << x + y;
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
	cout << "sum is : " << sum;
}

//While App (Show Numbers between a range entered by the user
void While_App2()
{
	cout << "Enter the first number: ";
	int y = 0; int z = 0;
	cin >> y;
	cout << "Enter the second number : ";
	cin >> z;
	int range = z - y;
	while (range >= 0)
	{
		cout << "Number is: " << z - range << "\n";
		range--;
	}
}

//trying For
void For_App()
{
	int sum = 0;
	for (int y = 0; y <= 3; y++)
		sum += y;
	cout << sum;
}

//test loss of data in conversion
void Data_Conversion()
{
	float y = 1.99f;
	int z = y;
	cout << z;
}

//testing edge cases of naming variables
void WeirdNaming()
{
	int _ = 2;
	cout << _;
}

//testing references
void Using_References()
{
	int y = 50;
	int& z = y; //a reference must be initialized and can't be modified later
	z = 40; // z is another name for y
	cout << y;
}

//testing pointers
void Using_Pointer()
{
	int y = 40; 
	int* p;
	p = &y;
	*p = 1;
	cout << y;
}

//testing memory locations to which pointers point to (using breakpoints)
void Using_Pointer_2()
{
	char* x = new char[8];
	memset(x, 1, 8);
	delete[] x;
}

//testing the auto type keyword
void Using_Auto()
{
	int i = 5;
	double j = 3.1;
	auto y = j + i;
	cout << y;
}

//testing type detector
void Discover_type()
{
	int i = 1;
	decltype(i) y = 4;
	cout << y;
}

//testing the creation of a new structure
struct Test_DataType {	int x = 0; 	float y = 2;};
void Testing_a_DataType()
{
	Test_DataType tests;
	cin >> tests.y;
	cout << "x is : " << tests.x << ", y is : " << tests.y;
}

//testing a basic class
struct Vector2 { int x = 0, y = 0; };
class Player
{

public:
	int PosX;
	int PosY;
	int Speed;

	Player(int x, int y)
	{
		PosX = x;
		PosY = y;
		Speed = 0;
	}
	Player(int x, int y, int _speed)
	{
		PosX = x;
		PosY = y;
		Speed = _speed;
	}
	void Move(Vector2& direction)
	{
		PosX += direction.x*Speed;
		PosY += direction.y*Speed;
	}
};

//testing using cout instead of std::cout
void Test_Using()
{
	int x = 0;
	cout << "enter any thing";
	cin >> x;
	cout << x;
}

//string as a array of chars
void Testing_String()
{
	string y = "test text";
	cout << y;
}

//testing string functions
void getLine_String_functiontest()
{
	string s;
	getline(cin, s);
	if (s.empty())
		cout << "you didn't enter anything";
	else
		for (auto r : s)
			cout << r << "\n";
	cout << s.size();
}

//testing vectors
void Vector_test()
{
	vector<int> v = { 1,2,3 };
	v.push_back(4);
	for (int i : v)
		cout << i << "\n";
	for (int i : v)
		cout << &i << "\n";
}

//testing iterators with containers
void Iterator_Test()
{
	vector<int> v = { 1, 2, 3 };
	auto it = v.begin();
	*it = 13;
	cout << *it;
	it++;
	cout << *it;

}

//testing arrays
void Array_Test()
{
	int arr[] = { 1,2,3,4,5 };

	for (int i : arr)
		cout << i << "\n";
}

//using points to use arrays
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

//items positions in memory
void SizeOf_Test()
{
	vector<int> i = { 1,2,3 ,4,4,4,5,5,5,5,1,2,3 ,4,4,4,5,5,5,5};
	for (unsigned int x = 0; x <= i.size() - 1; ++x)
		cout << &i[x] << "\n";
	cout << sizeof(i);
}

//converting between types
void Explicit_Cat()
{
	int i = 3;
	cout << static_cast<double>(i) / 2;
}

//testing switch
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

//Custom print functions
void print(string s)
{
	cout << s;
}

//concept of using reference as an arguement
void negate(int& num)
{
	num = -num;
}
 
//the concept of function overloading  - f1
void Overload_x(string s)
{
	cout << s;
}

//the concept of function overloading  - f1
void Overload_x(int i)
{
	cout << i;
}


//trying out enums
enum typeOfError { ty_Error, ty_Warning, ty_Log };
void Log_Message(string message,typeOfError ty)
{
	string s;

	if (ty == ty_Error)
		s = "[Error]";
	else if (ty == ty_Warning)
		s = "[Warning]";
	else if (ty == ty_Log)
		s = "[Log]";

	cout << s << " : " << message << endl;
}