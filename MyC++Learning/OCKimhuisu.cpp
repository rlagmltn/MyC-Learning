#include <iostream>
#define MAX_BUCKET_COUNT 3

using namespace std;

int bucket[MAX_BUCKET_COUNT];
int current[MAX_BUCKET_COUNT];
int n;

bool Check()
{
	for (int i = 0; i < MAX_BUCKET_COUNT; i++)
	{
		if (current[i] == n)
			return true;
	}
	return false;
}
int main()
{
	for (int i = 0; i < MAX_BUCKET_COUNT; i++)
	{
		cin >> bucket[i];
	}
	for (int i = 0; i < MAX_BUCKET_COUNT; i++)
	{
		cin >> current[i];
	}
	cin >> n;
	if ((bucket[0] < n && bucket[1] < n && bucket[2] < n) || (current[0] + current[0] + current[1] < n))
	{
		cout << -1;
		return;
	}
	while (!Check())
	{

	}
}