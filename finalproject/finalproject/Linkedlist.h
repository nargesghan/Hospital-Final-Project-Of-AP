#pragma once
#include<iostream>
using namespace std;
template <class T>
class listnode {
public:
	//friend class Linkedlist<T>;
	listnode(const T& info) :data(info), nextptr(0) {}
	T getdata()const { return data; }
	T data;
	listnode<T>* nextptr;
};
template <class T>
class Linkedlist {
public:
	Linkedlist() :firstptr(0), lastptr(0) {}
	void insetAtFront(const T& value) {
		listnode<T>* newptr = getnewnode(value);
		if (isempty())
			firstptr = lastptr = newptr;
		else
		{
			newptr->nextptr = firstptr;
			firstptr = newptr;
		}
	}
public:
	void insertAtBack(const T& value) {
		listnode<T>* newptr = getnewnode(value);
		if (isempty())
			firstptr = lastptr = newptr;
		else {
			lastptr->nextptr = newptr;
			lastptr = newptr;
		}
	}
	int removeFromFront(T& value) {
		if (isempty())
			return 0;
		else {
			listnode<T>* tempptr = firstptr;
			if (firstptr == lastptr)
				firstptr = lastptr = 0;
			else
				firstptr = firstptr->nextptr;
			value = tempptr->data;
			delete tempptr;
			return 1;
		}
	}
	int isempty()const {
		return firstptr == 0;
	}
	void print()const {
		if (isempty())
		{
			cout << "the list is empty.";
			return;
		}
		listnode<T>* currentptr = firstptr;
		cout << "The list is:";
		while (currentptr != 0) {
			cout << currentptr->data << " ";
			currentptr = currentptr->nextptr;
		}
		cout << "\n";
	}
private:
	listnode<T>* firstptr;
	listnode<T>* lastptr;
	listnode<T>* getnewnode(const T& value) {
		listnode<T>* ptr = new listnode<T>(value);
		if (ptr == 0) {
			cout << "Allocation failure...";
			cin.get();
			exit(1);
		}
		return ptr;
	}
};


