#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string ligne;
	int module, fuel = 0;
	ifstream file("Text.txt");

	while (getline(file, ligne))
	{
		module = round(stoi(ligne) / 3) - 2;
		cout << module << endl;
		fuel += module;
	}
	cout << fuel << endl;
}
