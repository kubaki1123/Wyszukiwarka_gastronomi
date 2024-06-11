#include "LinkedList.h"



Data Node::operator=(Data data)
{
	this->data.cena = data.cena;
	this->data.nazwa = data.nazwa;
	this->data.ocena = data.ocena;
	this->data.rodzaj = data.rodzaj;

	return Data();
}

Node Node::nodeCreate(Data dataobj,Node& nodelast)
{
	
	Node* node = new Node();

	Node* last = &nodelast;

	static const Node* head = last;

	while (last->next!=nullptr) {
		last = last->next;
	}
	last->next = node;
	
	node->data = dataobj;
	node->prev = last;
	node->next = nullptr;
	tail = node;


	return *node;
}




