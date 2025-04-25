#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void display(int dep)
{
	int depi = 0;
	string foo;
	string empId;
	string EmpName;
	string EmpJoiningDate;
	string DeptId;
	string Contact;
	string Salary;
	string Marital_Status;
	ifstream fin;
	fin.open("employee.csv");
	if (!fin)
	{
		cout << "file not found" << endl;
	}
	else
	{
		for (int i = 0; i < 7; i++)
		{
			fin >> foo;
		}
		cout << "Employees of Research department : " << endl;
			while (!fin.eof()) 
		{
			fin >> empId;
			fin >> EmpName;
			fin >> EmpJoiningDate;
			fin >> depi;
			fin >> Contact;
			fin >> Salary;
			fin >> Marital_Status;
			fin >> foo;
			if (depi == dep)
			{
				cout << "EmpId : " << empId << endl;
				cout << "EmpName : " << EmpName << endl;
				cout << "EmpJoiningDate : " <<EmpJoiningDate<< endl;
				cout << "DeptId : " << depi << endl;
				cout << "Contact : " << Contact << endl;
				cout << "Salary : " << Salary << endl;
				cout << "Marital satus : " << Marital_Status << endl;
			}
		}
		fin.close();
	}
}
int main()
{
	int dep_id =0;
	string dep = "Research";
	string foo;
	
	
	
	double gpa = 0;

	ifstream fin;
	fin.open("department.csv");
	if (!fin)
	{
		cout << "file not found" << endl;
	}
	else
	{
		fin >> foo;
		fin >> foo;
		while (!fin.eof())
		{
			fin >> dep_id;
			fin >> foo;
			if (foo == dep)
			{
				break;
			}
		}
		fin.close();
		
	}
	display(dep_id);
	return 0;
}