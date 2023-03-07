#include <iostream>
#include <string>
using namespace std;

float Translate(string s)
{
	return ((int)s.front() - 48) + (((int)s.back() - 48) * 0.1);
}
float SetMulti(string grade)
{
	float multi = 0.0;
	switch (grade.front())
	{
	case 'A':
		multi = 4;
		break;
	case 'B':
		multi = 3;
		break;
	case 'C':
		multi = 2;
		break;
	case 'D':
		multi = 1;
		break;
	default:
		multi = 0;
		break;
	}
	switch (grade.back())
	{
	case '+':
		multi += 0.5;
		break;
	default:
		break;
	}
	return multi;
}
int main()
{
	cout << fixed;
	cout.precision(6);
	float sum = 0, div = 0;
	for (int i = 0; i < 20; i++)
	{
		string trash, point, grade;
		cin >> trash >> point >> grade;
		float multi = SetMulti(grade);

		if (grade != "P")
		{
			sum += Translate(point) * multi;
			div += Translate(point);
		}
	}
	sum /= div;
	cout << sum;
}