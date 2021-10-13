#include <iostream>
#include <cstdio>
#include "Test_Features.h"
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;


int main()
{
	vector<int> v = { 1,2,3 };
	for (int i : v)
		cout << i << "\n";

	std::getchar(); //stop cmd from closing.
	return 0;
}







