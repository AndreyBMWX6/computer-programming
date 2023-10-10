#include <iostream>
#include <vector>
#include "student.h"
using namespace std;


int main()
{
	int n, m;
	string FIOoo;
	vector <int> marksss;
	cout << "kol-vo studentov:";
	cin >> n;
	
	Student** ppS;
	ppS = new Student*[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Student " << i + 1 << ":" << endl << "FIO:";
		cin >> FIOoo;
		cout << "kol-vo ocenok:";
		cin >> m;
		marksss.resize(m);
		cout << "ocenki za ekzameny:";
		for (int i = 0; i < m; i++)cin >> marksss[i];
		ppS[i] = new Student(FIOoo, marksss);
	}
	
	for (int i = 0; i < n; i++)
	{
			ppS[i]->print();
	}
}
