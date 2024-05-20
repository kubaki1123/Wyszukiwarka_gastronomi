#include"find.h"


void find(Node& noderef, std::string nazwa) {

	Node* node = new Node();
	node = &noderef;
	
	
	while (node != nullptr) {
		
		std::string name = node->data.nazwa;
		const char* strref;
		const char* strnazwa;
		strref = name.c_str();
		strnazwa = nazwa.c_str();
		
		if (std::strcmp(strnazwa, strref) == 0) {
			
			std::cout << node->data.nazwa << '\t' << node->data.cena << '\t' << node->data.ocena << '\t' << node->data.rodzaj << std::endl;

		}
		
		node = node->next;
	}

};




