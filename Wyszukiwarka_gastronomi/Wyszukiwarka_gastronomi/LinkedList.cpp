#include "LinkedList.h"



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




