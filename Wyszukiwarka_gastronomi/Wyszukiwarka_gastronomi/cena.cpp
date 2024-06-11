#include"cena.h"

Node SortPrice::PriceUp(Node& ref) {
	Data data_buf;
	Node* node = new Node();
	node = &ref;

	while (node != nullptr) {
		if (node->next != nullptr) {
			if (node->data.cena >= node->next->data.cena) {
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

Node SortPrice::PriceDown(Node& ref) {
	Data data_buf;
	Node* node = new Node();
	node = &ref;

	while (node != nullptr) {
		if (node->next != nullptr) {
			if (node->data.cena >= node->next->data.cena) {
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



void cena_w_gore(Node& ref) {
	SortPrice SortPrice;
	
	 Node* node = new Node();
	 node = &ref;

	 while (node != nullptr) {
		 SortPrice.PriceUp(ref);
		 node = node->next;
	 }

	 node = &ref;

	 while (node != nullptr) {

		 std::cout << node->data.nazwa << '\t' << node->data.cena << '\t' << node->data.ocena << '\t' << node->data.rodzaj << std::endl;

		 node = node->next;
	 }
}

void cena_w_dol(Node& ref) {
	SortPrice SortPrice;
	
	Node* node = new Node();
	node = &ref;

	while (node != nullptr) {
		SortPrice.PriceDown(ref);
		node = node->next;
	}

	node = &ref;

	while (node->tail != nullptr) {

		std::cout << node->tail->data.nazwa << '\t' << node->tail->data.cena << '\t' << node->tail->data.ocena << '\t' << node->tail->data.rodzaj << std::endl;

		node->tail = node->tail->prev;

	}

}