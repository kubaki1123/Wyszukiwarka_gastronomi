#include"cena.h"

Node SortPrice::PriceUp(Node& ref) {
	std::string bufor_cena;
	std::string bufor_nazwa;
	std::string bufor_rodzaj;
	double bufor_ocena;
	Node* node = new Node();
	node = &ref;

	while (node != nullptr) {
		if (node->next != nullptr) {
			if (node->data.cena >= node->next->data.cena) {

				bufor_cena = node->data.cena;
				bufor_nazwa = node->data.nazwa;
				bufor_rodzaj = node->data.rodzaj;
				bufor_ocena = node->data.ocena;


				node->data.cena = node->next->data.cena;
				node->data.nazwa = node->next->data.nazwa;
				node->data.rodzaj = node->next->data.rodzaj;
				node->data.ocena = node->next->data.ocena;


				node->next->data.cena = bufor_cena;
				node->next->data.nazwa = bufor_nazwa;
				node->next->data.rodzaj = bufor_rodzaj;
				node->next->data.ocena = bufor_ocena;
			}
			node = node->next;
		}
		else {

			return *node;
		}

	}

}

Node SortPrice::PriceDown(Node& ref) {
	std::string bufor_cena;
	std::string bufor_nazwa;
	std::string bufor_rodzaj;
	double bufor_ocena;
	Node* node = new Node();
	node = &ref;

	while (node != nullptr) {
		if (node->next != nullptr) {
			if (node->data.cena >= node->next->data.cena) {

				bufor_cena = node->data.cena;
				bufor_nazwa = node->data.nazwa;
				bufor_rodzaj = node->data.rodzaj;
				bufor_ocena = node->data.ocena;


				node->data.cena = node->next->data.cena;
				node->data.nazwa = node->next->data.nazwa;
				node->data.rodzaj = node->next->data.rodzaj;
				node->data.ocena = node->next->data.ocena;


				node->next->data.cena = bufor_cena;
				node->next->data.nazwa = bufor_nazwa;
				node->next->data.rodzaj = bufor_rodzaj;
				node->next->data.ocena = bufor_ocena;
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