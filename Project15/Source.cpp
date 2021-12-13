#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;
class Stack
{
	enum{Empty = -1, FULL = 20};
	char st[ FULL + 1 ];
	int top;
public:
	Stack();
	void Push(char c);
	char Pop();
	void Clear();
	bool IsEmpty();
	bool IsFull();
	int GetCount();
};
Stack::Stack()
{
	top = Empty;
}
void Stack::Push(char c)
{
	if (!IsFull())
		st[++top] = c;
}
char Stack::Pop()
{
	if (!IsEmpty())
		return st[top--];
	else
		return 0;
}
void Stack::Clear()
{
	top = Empty;
}
bool Stack::IsEmpty()
{
	return top == Empty;
}
bool Stack::IsFull()
{
	return top == FULL;
}
int Stack::GetCount()
{
	return top + 1;
}

int main()
{
	srand(time(NULL));
	Stack ST;
	char c;
	while (!ST.IsFull())
	{
		c = rand() % 4 + 2;
		ST.Push(c);
	}
	ST.Push('a');
	while (c = ST.Pop())
		cout << c << " ";
	cout << "\n\n";
	return 0;
}