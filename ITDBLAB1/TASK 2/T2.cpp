#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	char check = { '\0' };
	string first_name;
	string last_name;
	string foo;
	double gpa = 0;

	ifstream fin;
	fin.open("data.csv");
	if (!fin)
	{
		cout << "file not found" << endl;
	}
	else
	{
		while (!fin.eof())
		{

			fin >> foo;
			fin >> first_name;
			fin >> last_name;
			fin >> foo;
			fin >> gpa;
			if (gpa > 3.5)
			{
				cout << first_name << " " << last_name << endl;
			}
			fin >> foo;


		}

		fin.close();
	}
	return 0;
}