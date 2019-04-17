#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int size;
	cin>>size;
	int mul_elems = 0;
	for (int i = 0; i < size; i++)
	{
		int elem = 0;
		cin>>elem;
		mul_elems *= elem;
	}
	cout<<mul_elems<<endl;
	return 0;
}