#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int size;
	cin>>size;
	vector<int>elems(size);
	
	for (int i = 0; i < size; i++)
	{
		cin>>elems[i];
	}
	sort(elems.begin(), elems.end());
	
	double median = 0;
	if (size % 2 == 0)
		median = (elems[size / 2] + elems[size / 2 - 1]) / 2.0;
	else
		median = elems[size / 2];
	
	cout<<median<<endl;
	return 0;
}