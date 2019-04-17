#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int size;
	cin >> size;
	vector < int > elems(size);
	int sum_elems = 0;
	for (int i = 0; i < size; i++)
	{
		sum_elems += elems[i];
	}
	cout << sum_elems << endl;
	return 0;
}