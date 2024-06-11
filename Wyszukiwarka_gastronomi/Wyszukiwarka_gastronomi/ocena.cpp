#include "ocena.h"

Node SortRank::RankUp(Node& ref) {
	Data data_buf;
	Node* node = new Node();
	node = &ref;

	while (node != nullptr) {
		if (node->next != nullptr) {
			if (node->data.ocena >= node->next->data.ocena) {
				data_buf = node->data;
				node->data = node->next->data;
				node->next->data = data_buf;
			}
		node = node->next;
		}
		else {
			
			return *node;
		}
		
	}
	
	
}

Node SortRank::RankDown(Node& ref) {
	Data data_buf;
	Node* node = new Node();
	node = &ref;

	while (node != nullptr) {
		if (node->next != nullptr) {
			if (node->data.ocena < node->next->data.ocena) {
				data_buf = node->data;
				node->data = node->next->data;
				node->next->data = data_buf;
			}
			node = node->next;
		}
		else {

			return *node;
		}

	}


}


void ocena_w_gore(Node& ref) {
	SortRank SortRank;
	
	Node* node = new Node();
	node = &ref;

	while (node != nullptr) {
		SortRank.RankUp(ref);
		node = node->next;
	}
	
	node = &ref;

		while (node != nullptr) {

			std::cout << node->data.nazwa << '\t' << node->data.cena << '\t' << node->data.ocena << '\t' << node->data.rodzaj << std::endl;

			node = node->next;
		}
}

void ocena_w_dol(Node& ref) {
	SortRank SortRank;

	Node* node = new Node();
	node = &ref;

	while (node != nullptr) {
		SortRank.RankUp(ref);
		node = node->next;
	}
	
	node = &ref;
	
	while ( node->tail != nullptr) {
		
		std::cout << node->tail->data.nazwa << '\t' << node->tail->data.cena << '\t' << node->tail->data.ocena << '\t' << node->tail->data.rodzaj << std::endl;

		node->tail = node->tail->prev;
		
	}
}
