#include "findtype.h"

void find_type(Node& ref, std::string nazwa) {
		Node* node = new Node();
		node = &ref;

		while (node != nullptr) {

			std::string name = node->data.rodzaj;
			const char* strref;
			const char* strnazwa;
			strref = name.c_str();
			strnazwa = nazwa.c_str();

			if (std::strcmp(strnazwa, strref) == 0) {

				std::cout << node->data.nazwa << '\t' << node->data.cena << '\t' << node->data.ocena << '\t' << node->data.rodzaj << std::endl;

			}

			node = node->next;
		}

}

