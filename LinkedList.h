#include <iostream>
#include <string>
using namespace std;


template <typename T>
struct node
{
	T data;
	node<T> *next;
};

template <typename T>
class linkedlist
{
private:
	node<T> *head;

public:
	linkedlist()
	{
		head = NULL;
	}

	void push(T data)
	{
		node<T> *temp = new node<T>;
		temp->data = data;
		temp->next = NULL;
		node<T> *curr;
		node<T> *prev;
		curr = head;
		prev = head;
		if (head != NULL)
		{
			while (curr != NULL)
			{
				prev = curr;
				curr = curr->next;
			}
			prev->next = temp;
		}
		else
		{
			head = temp;
		}
	}

	T pop()
	{
		node<T> *curr;
		node<T> *prev;
		T s;
		curr = head;
		prev = head;
		if (curr != NULL && curr->next != NULL)
		{
			while (curr->next != NULL)
			{
				prev = curr;
				curr = curr->next;
			}
			s = curr->data;
			prev->next = NULL;
			curr = prev;
			return s;
		}
		else if (curr == NULL)
		{
			return 0;
		}
		else if (curr == head)
		{
			s = head->data;
			head = NULL;
			return s;
		}
		return 0;
	}

	void printForward(node<T> *head)
	{
		if (head != NULL)
		{
			cout << head->data << " ";
			printForward(head->next);
		}
	}

	void printReverse(node<T> *head)
	{
		if (head != NULL)
		{
			printReverse(head->next);
			cout << head->data << " ";
		}
	}

	bool empty()
	{
		if (head == NULL)
		{
			return true;
		}
		else
			return false;
	}

	void fill()
	{
		int count;
		cout << "Amount of elements to be present in linked list: ";
		cin >> count;
		int c = count;
		node<T> *curr = head;
		T d;
		while ( count!= 0)
		{
			cin>>d;
			count--;
			push(d);
		}
	}

	bool search(node<T> *head, int d)
	{
		if (head != NULL)
		{
			if (head->data == d)
			{
				return true;
			}
			else 
				search(head->next,d);
		}
		else if (head == NULL)
		{
			return false;
		}
	}

	node<T> *retHead()
	{
		return head;
	}

};