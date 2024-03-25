#include"find.h"


void find(std::vector<restauracja> ref, std::string nazwa) {

	for (int i = 0; i < ref.size(); i++) {
		std::string name = ref[i].get_nazwa();
		const char* strref;
		const char* strnazwa;
		strref = name.c_str();
		strnazwa = nazwa.c_str();

		if (std::strcmp(strnazwa, strref) == 0) {
			std::cout << ref[i].get_nazwa() << '\t' << ref[i].get_cena() << '\t' << ref[i].get_ocena() << '\t' << ref[i].get_rodzaj() << std::endl;

		}

	}

};




