// ConsoleApplication_cal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"ca_l.h"
using namespace std;
int main()
{
    cout << "Hello World!\n";
	float x=0.0, y=0.0, result = 0.0;
	cout << "please enter the operation to perform formate:a+b|a-b|a*b|a/b" << endl;
	char oper = '+';
	ca_l r1;
	int i = 1;
	while (i)
	{
		cin >> x >> oper >> y;
		result = r1.calculate(x, oper, y);
		cout << "result is" << result << endl;
		cout << "do you want to continue press any number expect 0" << endl;
		cin >> i;
	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
