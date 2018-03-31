#ifndef SEQLIST_H_
#define SEQLIST_H_

const int Max = 100;
class SeqList
{
private:
	int data[Max];
	int length;
public:	
	SeqList() { length = 0; }
	SeqList(int a[], int n);
	~SeqList() { }
	int Length() { return length; }
//	void Insert(int i, T x);
	void PrintList();
	friend SeqList Add(SeqList A, SeqList B);
};


#endif
