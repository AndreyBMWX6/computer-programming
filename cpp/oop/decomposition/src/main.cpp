#include <iostream>
#include <fstream>

#include "vector.h"

Vector& operator+(Vector& v2, double* p)
{
	int n = v2.n;
	for (int i = 0; i < n; i++) v2[i] += p[i];
	return v2;
}

std :: ostream& operator<<(ostream& out, Vector& V)
{
	out << "n=" << V.n << endl << "Vector:";
	for (int i = 0; i < V.n; i++)
		out << V.p[i] << " ";
	return out;
}

std :: istream& operator>>(istream& in, Vector& V)
{
	in >> V.n;
	cin.ignore(2, '\n');
	V.p = new double(V.n);
	for (int i = 0; i < V.n; i++)
		in >> V[i];
	return in;
}

ofstream& operator<<(ofstream& fout, Vector& V)
{
	fout << V.n << endl;
	for (int i = 0; i < V.n; i++)
		fout << V.p[i] << " ";
	return fout;
}

ifstream& operator>>(ifstream& fin, Vector& V)
{
	fin >> V.n;
	fin.ignore(2, '\n');
	for (int i = 0; i < V.n; i++)
		fin >> V.p[i];
	return fin;
}


int main()
{
	int n;
	double* p;
	ifstream fint("input.txt");
	if (!fint) cout << "klaun" << endl;
	fint >> n;
	p = new double[n];
	fint.ignore(2,'\n');
	for (int i = 0; i < n; i++) fint >> p[i];
	fint.close();
	Vector v(p,n);
	Vector v2 = v;
	v2[3] = 10;
	cout << v2 << endl;
	Vector v3;
	cout << "Vvedite vector:\n";
	cin >> v3;
	ofstream fout("output.txt");
	fout << v3;
	fout.close();
	cout << "Vvedite vector:\n";
	cin >> n;
	cin.ignore(2, '\n');
	p = new double[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	Vector a1(p, n);
	Vector a2 = a1 + p;
	cout << endl << a2;
}
