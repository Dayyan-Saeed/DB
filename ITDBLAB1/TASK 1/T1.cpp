#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char check = '\0';
	string roll;
	string first_name;
	string last_name;
	string program;
	double gpa = 0;
	string number;
	ofstream fout;
	fout.open("StudentInfo.csv");
	fout << "RegistrationNumber , First Name, Last Name, Program , CGPA, ContactNumber" << endl;
	while (true)
	{
		cout << "Enter registration number : ";
		cin >> roll;
		fout << roll << ",";
		cout << "Enter First Name : ";
		cin >> first_name;
		fout << first_name << ",";
		cout << "Enter Last Name : ";
		cin >> last_name;
		fout << last_name << ",";
		cout << "Enter Program : ";
		cin >> program;
		fout << program << ",";
		cout << "Enter CGPA : ";
		cin >> gpa;
		fout << gpa << ",";
		cout << "Enter ContactNumber : ";
		cin >> number;
		fout << number << endl;

		cout << "Enter x to exit : ";
		cin >> check;
		if (check == 'x')
		{
			cout << "Exited";
			break;
		}
	}
		fout.close();
		return 0;
}