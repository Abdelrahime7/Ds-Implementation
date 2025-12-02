// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ConsoleApplication1.h"
using namespace std ;
template <typename T>
 class Queue
{

private: 

	T * queueArr;
	int queueSize = 1;
	T * TempArr;

	
 public :

		void EnQueue(T value)
	  {
			queueArr = new T[queueSize];
			queueArr[0] = value;
			if (queueSize>1)
			{
				queueSize++;
				TempArr = new T[queueArr.length()];
				for (int i = 0; i <= queueSize; i++)
				{
					TempArr[i] = queueArr[i];
				}
				queueArr[0] = value;
				for (int i = 0; i <= queueSize; i++)
				{
					  queueArr[i+1]= TempArr[i];
				}
				 delete[]TempArr ;

			}

	}
		void print()
		{
			for (int i = 0; i <= queueSize; i++)
			{
				cout<< queueArr[i]<<endl;
			}
		
			
		}




};


int main()
{
	
	Queue <int> q;
	q.EnQueue(1);
	q.print();


}
