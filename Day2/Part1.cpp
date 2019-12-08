#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

vector<int> StringToArray(vector<int> p_vec, stringstream& p_ss) //Obligé de passer le stringstream par référence
{
	for (int i; p_ss >> i;)
	{
		p_vec.push_back(i);
		if (p_ss.peek() == ',')
		{
			p_ss.ignore();
		}
	}
	
	return p_vec;
}

int main()
{
	ifstream file("input.txt"); //Création du fichier
	string inputStr; //Création d'un string
	int index = 0, intTab[4], indexResult, intOne, intTwo;
	getline(file, inputStr); //Mon inputStr prends tout mon fichier

	file.close(); //Fermeture du fichier

	vector<int> vec;
	stringstream ss(inputStr);
	
	vec = StringToArray(vec, ss);

	while (vec[index] != 99)
	{
		for (index; index ; index++)
		{
			intTab[index] = vec[index];
		}

		if (intTab[0] == 1)
		{
			intOne = intTab[1] + intTab[2];
			indexResult = vec[index] + 3;
			vec[indexResult] = intOne;
		}
		else if (intTab[0] == 2)
		{
			intTwo = intTab[1] * intTab[2];
			indexResult = vec[index] + 3;
			vec[indexResult] = intTwo;
		}
		index += 3;
	}
	cout << vec[0] << endl;


	/*for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}*/
}
