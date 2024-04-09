#pragma once
#include<iostream>
#include"interfejs.h"


class SortRank {
public:

	std::vector<restauracja> RankUp(int first, int last, std::vector<restauracja>ref);
	std::vector<restauracja> RankDown(int first, int last, std::vector<restauracja>ref);

};

void ocena_w_gore(std::vector<restauracja>ref);
void ocena_w_dol(std::vector<restauracja>ref);