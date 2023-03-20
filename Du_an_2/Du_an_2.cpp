#include <iostream>
#include "Linked_list.h"
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
	Linked_list lst;
	srand(time(NULL));
	for (int i = 0; i < 20; ++i) {
		int x = rand() % 200 - 100;
		lst.append(x);
	}
	lst.Interchange_sort();
	lst.print(cout);
	return 0;
}