// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Scottie Sterling
//1162018


#include "pch.h"
#include <iostream>
using namespace std;
int main()
{ 
	int s, l, y, space = 1;
	cout << " how many rows would you like your diamond to be!! " << endl;

	cin >> s;

	space = s - 1;

	for (y = 1; y <= s; y++)
	{
		for (l = 1; l <= space; l++)
		{
			cout << " ";
		}
		space--;
		for (l = 1; l <= 2 * y - 1; l++)
		{
			cout << "*";
		}
		cout << "\n ";
	}

	space = 1;


			for (y = 1; y <= s - 1; y++)
			{
				
				for (l = 1; l <= space; l++)
				{
					cout << " ";
				}
				space++;
					for ( l = 1; l <= 2 * (s-y) - 1 ; l ++)
					{
						cout << "*";
					}
					cout << "\n ";
			}

	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

