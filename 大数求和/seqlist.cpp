#include <iostream>
#include "seqlist.h"

int max(int a, int b)	{ return a > b ? a : b; }

SeqList::SeqList(int a[], int n)
{
	if (n > Max) throw "参数非法";
	for (int i = 0; i < n; i++)
		data[i] = a[i];
	length = n;
}

void SeqList::PrintList()
{
	for (int i = length - 1; i >= 0; i--)
		std::cout << data[i];
	std::cout << std::endl;
}

SeqList Add(SeqList A, SeqList B)
{
	SeqList C;
	int flag = 0, i = 0;
	int n = A.length;
	int m = B.length;
	while(i < n && i < m)
	{
		C.data[i] = (A.data[i] + B.data[i] + flag) % 10;
		flag = (A.data[i] + B.data[i] + flag) / 10;
		i++;
	}
	for (; i < n; i++)
	{
		C.data[i] = (A.data[i] + flag) % 10;
		flag = (A.data[i] + flag) / 10;
	}
	for (; i < m; i++)
	{
		C.data[i] = (B.data[i] + flag) % 10;
		flag = (B.data[i] + flag) / 10;
		
	}
	C.length = max(m, n) + flag;
	if(flag == 1)
		C.data[C.length-1] = 1;
	return C;
}

