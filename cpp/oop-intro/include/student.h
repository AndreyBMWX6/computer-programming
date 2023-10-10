#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Student
{
	string FIO;
	vector <int> marks;
public:
	Student(string name, vector<int> Marks)
	{
		FIO = name;
		marks = Marks;
	}
	void print()
	{
		bool fl = true;
		for (int i = 0; i < marks.size(); i++)
		{
			if (marks[i] <= 3) fl = false;
		}
		if (fl) cout << "FIO Studenta:" << FIO << endl;
	}
};
