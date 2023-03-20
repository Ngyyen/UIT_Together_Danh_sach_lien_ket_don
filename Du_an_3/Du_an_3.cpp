#include <iostream>
#include "Linked_list.h"
#include <string>
#include <fstream>
using namespace std;
int main()
{
	ifstream fi("intdata12.inp");
	Linked_list lst;
	lst.Nhap(fi);
	lst.Interchange_sort();
	ofstream fo("intdata12.out");
	lst.print(fo);
	return 0;
}