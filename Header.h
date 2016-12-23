#pragma once
/*
Project:Linked List
Engineer : Nikhil.P.Lokhande
email : nikhil.l.1@aol.com
LList class
*/
#ifndef LList_H
#define LList_H

#include <iostream>                         // Include I/O header

using namespace std;                     

class Node                                        // Node class
{
public:
	int Data;
	Node* Link;

};


class LList                      // LList class 
{

public:


	LList()         // Constructor
	{
		Head = NULL;     // Head Node pointer
		Tail = NULL;     // Tail Node pointer
		Size = 0;       // Size of the list
	}




	int length()            // Length function returns size of the list
	{
		return Size;

	}


	void append(int Item)   // Append function , adds a new element at the end of the list
	{
		if (Size == 0)      // If empty , replace the head.
		{
			Node* N = new Node();
			N->Data = Item;
			N->Link = N;
			Head = N;
			Tail = Head;
			Size = Size + 1;

		}

		else
		{
			Node* N = new Node();            // If not empty , add to the tail then update the tail

			N->Data = Item;
			N->Link = Tail;
			Tail->Link = N;
			Tail = N;

			Size = Size + 1;


		}



	}

	int find(int Target)                  // Find function ,if target is found returns the index, else returns -1 
	{
		Node* P;
		P = Head;
		for (int i = 0; i < Size; ++i)
		{
			if (P->Data == Target)
			{
				cout << "index:" << endl;
				return i;
			}
			else
			{
				P = P->Link;
			}
		}
		cout << "Not Found" << endl;
		return -1;
	}


	void print()                           // Print all the elements 
	{
		Node* P;
		P = Head;

		for (int i = 0; i<Size; ++i)
		{
			cout << P->Data << endl;
			P = P->Link;

		}

}

	int& LList::operator[] (const int Index)   // [] Operator overload to use indexing
	{
		Node* P;
		P = Head;
		for (int i = 0; i < Index; ++i)
		{
			P = P->Link;
		}
		return  P->Data;
	}

private:            // Private members
	int Size;
	Node* Head;
	Node* Tail;

};

#endif
