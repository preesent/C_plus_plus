#include <iostream>
#include <string>
#include "seqlist.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	using namespace std;
	int a[Max], b[Max];
	string m, n;
	cout << "输入2个数：\n"; 
	cin >> m >> n;
	int length1 = m.size();
	int length2 = n.size();
	for (int i = 0; i < length1; i++)
		a[i] = m[length1-1-i] - 48;
	for (int i = 0; i < length2; i++)
		b[i] = n[length2-1-i] - 48;
	SeqList num1(a, length1);
	SeqList num2(b, length2);
	SeqList sum = Add(num1, num2);
	cout << "两数之和：\n" ;
	sum.PrintList();
	system("pause");
	return 0;
}
