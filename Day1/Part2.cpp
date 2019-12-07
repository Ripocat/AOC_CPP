#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string ligne;
	int addedFuel = 0, fuel = 0, overallFuel = 0;
	ifstream file("Text.txt");

	while (getline(file, ligne))
	{
		fuel = round((stoi(ligne) / 3) - 2);
		addedFuel = fuel;

		while ((fuel / 3) -2  > 0)
		{
			addedFuel += round(fuel / 3) - 2;
			fuel = round(fuel / 3) - 2;
		}
		cout << addedFuel << endl;
		overallFuel += addedFuel;
	}
	cout << overallFuel << endl;
}
