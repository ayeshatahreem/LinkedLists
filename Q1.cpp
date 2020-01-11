#include <iostream>
#include "LinkedList.h"
#include <string>
using namespace std;

int main()
{
	linkedlist<int> a;
	a.fill();
	node<int> *s = NULL;
	s = a.retHead();
	cout << endl;
	cout<< "1)Forward linked list: " << endl;
	a.printForward(s);
	cout << endl;
	s = a.retHead();
	cout << endl ;
	cout<< "2)Reverse linked list: " << endl;
	a.printReverse(s);
	cout << endl;
	s = a.retHead();
	cout << endl ;
	cout<< "3)Search element: " << endl;
	cout<<"Enter the value to be searched in linked list: ";
	int value;
	cin>>value;
	cout << "Searched element is ";
	if(a.search(s, value))
	{
			cout<<"present in linked list!"<<endl;
	}
	else 
	{
		cout<<"not present in linked list!"<<endl;
	}
	cout << endl;
	system("pause");
}