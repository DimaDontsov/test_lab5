#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int size;
	cin>>size;
	vector<int>elems(size);
	int mul_elems = 0;
	for (int i = 0; i < size; i++)
	{
		mul_elems *= elems[i];
	}
	cout<<mul_elems<<endl;
	return 0;
}