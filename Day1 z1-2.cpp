#include <iostream>

using namespace std;

int compareMas(int source[], int dest[], unsigned int size)
{
	for (int i = 0; i<size; i++)
		{
			if (source[i] != dest[i])
				{
					return -1;
				}
		}
	return 0;
}

int testCompareMas ()
{
	int mas_1[] = {1,2,3,4,5,6,7,8,9,10,11};
	int mas_2[] = {1,2,3,4,5,6,7,8,9,10,11};
	if (compareMas(mas_1,mas_2,10) !=0)
	{
		return -1;
	}
	
	int mas_3[] = {1,2,3,4,5,6,7,8,9,10,11};
	int mas_4[] = {1,3,5,7,9,11,13,15,17,19,21};
	if (compareMas (mas_3,mas_4,10) == 0)
	{
		return -1;
	}
	
	return 0;
}

int main()
{
	int source[] = {1,1,2,3,5,8,13,21,34,55,89};
	int dest[] = {1,1,2,3,5,8,13,21,34,55,89};
	int result = compareMas(source,dest,10);
	cout << "Result of comparing is " << result << endl;
	int resultTest = testCompareMas();
	if (resultTest == 0)
		{
			cout <<"Result of Test is OK";
		}
	else 
		{
			cout <<"Result of Test is FAIL";
		}
	return 0;
}
