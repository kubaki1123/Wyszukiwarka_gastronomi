#include "ocena.h"

std::vector<restauracja> SortRank::RankUp(int first, int last, std::vector<restauracja>ref) {
	std::string bufor_cena;
	std::string bufor_nazwa;
	std::string bufor_rodzaj;
	double bufor_ocena;

	for (int i = 0; i < ref.size() - 1; i++) {
		if (ref[i].get_ocena() > ref[i + 1].get_ocena()) {
			bufor_cena = ref[i].get_cena();
			bufor_nazwa = ref[i].get_nazwa();
			bufor_rodzaj = ref[i].get_rodzaj();
			bufor_ocena = ref[i].get_ocena();

			ref[i].set_cena(ref[i + 1].get_cena());
			ref[i].set_nazwa(ref[i + 1].get_nazwa());
			ref[i].set_rodzaj(ref[i + 1].get_rodzaj());
			ref[i].set_ocena(ref[i + 1].get_ocena());


			ref[i + 1].set_cena(bufor_cena);
			ref[i + 1].set_nazwa(bufor_nazwa);
			ref[i + 1].set_rodzaj(bufor_rodzaj);
			ref[i + 1].set_ocena(bufor_ocena);
		}
	}
	return ref;
}

std::vector<restauracja> SortRank::RankDown(int first, int last, std::vector<restauracja>ref) {
	std::string bufor_cena;
	std::string bufor_nazwa;
	std::string bufor_rodzaj;
	double bufor_ocena;

	for (int i = 0; i < ref.size() - 1; i++) {
		if (ref[i].get_ocena() > ref[i + 1].get_ocena()) {
			bufor_cena = ref[i].get_cena();
			bufor_nazwa = ref[i].get_nazwa();
			bufor_rodzaj = ref[i].get_rodzaj();
			bufor_ocena = ref[i].get_ocena();

			ref[i].set_cena(ref[i + 1].get_cena());
			ref[i].set_nazwa(ref[i + 1].get_nazwa());
			ref[i].set_rodzaj(ref[i + 1].get_rodzaj());
			ref[i].set_ocena(ref[i + 1].get_ocena());


			ref[i + 1].set_cena(bufor_cena);
			ref[i + 1].set_nazwa(bufor_nazwa);
			ref[i + 1].set_rodzaj(bufor_rodzaj);
			ref[i + 1].set_ocena(bufor_ocena);
		}
	}
	return ref;
}


void ocena_w_gore(std::vector<restauracja>ref) {
	SortRank SortRank;

	for (int i = 0; i < ref.size() - 1; i++) {

		ref=SortRank.RankUp(i, ref.size() - 1 - i, ref);

	}


	for (int i = 0; i < ref.size(); i++) {
		std::cout << ref[i].get_nazwa() << '\t' << ref[i].get_cena() << '\t' << ref[i].get_ocena() << '\t' << ref[i].get_rodzaj() << std::endl;
	}


}

void ocena_w_dol(std::vector<restauracja>ref) {
	SortRank SortRank;

	for (int i = 0; i < ref.size() - 1; i++) {

		ref = SortRank.RankDown(i, ref.size() - 1 - i, ref);

	}


	for (int i = ref.size()-1; i >=0; i--) {
		std::cout << ref[i].get_nazwa() << '\t' << ref[i].get_cena() << '\t' << ref[i].get_ocena() << '\t' << ref[i].get_rodzaj() << std::endl;
	}
}
