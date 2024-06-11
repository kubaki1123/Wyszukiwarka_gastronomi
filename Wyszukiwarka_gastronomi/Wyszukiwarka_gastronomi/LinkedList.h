#pragma once
#include <iostream>

struct Data {
	std::string nazwa;
	std::string cena;
	double ocena;
	std::string rodzaj;

};

class Node {
public:


	Node* prev=nullptr;
	Data data;
	Node* next=nullptr;
	Node* head;
	Node* tail = nullptr;
	Data operator=(Data data);

	Node nodeCreate(Data dataobj,Node& node);


	

};
