#include <iostream>

using namespace std;

int func(int number,int count)
{
	return (number % count +1);
}

int main() 
{
	int number = 12, count =10;
	cout << func (number,count);
	return 0;
}
