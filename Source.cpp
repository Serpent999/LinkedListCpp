/*
Project:Linked List
Engineer : Nikhil.P.Lokhande
email : nikhil.l.1@aol.com
LList driver
*/



#include <iostream>                           //Include the I/O and LList class headers.
#include "Header.h"                                 



int main()                                         //Main function start
{
	LList L;                                      // Initialize LList object

	L.append(1);                                  // Append function
	L.append(2);                                
	L.append(3);
	L.append(4);
	L.append(5);

	cout<<"length="<<L.length()<<endl;          // Length function
	L.print();                                  // Print all function
	int x = L.find(5);                           // Search function, returns the index

	if (x!= -1)                           
	{
		cout <<x << endl;
	}
	L[0] = 3;
	cout << "L[0]:"<<L[0]  << endl;



	
	system("pause");
	return 0;
}



