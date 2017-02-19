// Algorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


#define GET_TIME(_fun_) \
{ \
	clock_t    start; \
	clock_t    end; \
	start = clock(); \
	_fun_\
	end = clock(); \
	cout << "Elapsed Time (ms): " << end - start << "\n"; \
}

class BigONotation
{
public: 
	BigONotation(int nSize): nArraySize(nSize)
	{
		pElements = new long int[nSize];
	}
	~BigONotation() {}
private:
	int _nItemsInArray;
public:
	long int* pElements;
	int nArraySize;
	void generateRandomArray() 
	{
		if (pElements != nullptr)
		{
			for (int i = 0; i < nArraySize; i++)
				pElements[i] = rand();

			_nItemsInArray = nArraySize - 1;
		}
	}

	//O(1)
	void addItemToArray(int newItem)
	{
		if (pElements != nullptr)
			pElements[_nItemsInArray++] = newItem;
	}

	//O(N)
	void linearSearch(int nItem)
	{
		bool bValueInArray = false;
		if (pElements != nullptr)
		{
			for (int i = 0; i < _nItemsInArray; i++)
				if (pElements[i] == nItem)
					bValueInArray = true;
		}
		//return bValueInArray;
	}
};

int main()
{
	BigONotation bigO(10000);
	GET_TIME(bigO.addItemToArray(12);)

	bigO.generateRandomArray();
	GET_TIME(bigO.linearSearch(12);)

	system("PAUSE");
    return 0;
}

