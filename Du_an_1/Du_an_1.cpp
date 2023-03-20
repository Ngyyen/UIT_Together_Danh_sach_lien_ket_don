#include <iostream>
#include "Linked_list.h"
using namespace std;
int main()
{
	Linked_list lst;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		lst.append(x);
	}
	lst.Interchange_sort();
	lst.print(cout);
	return 0;
}