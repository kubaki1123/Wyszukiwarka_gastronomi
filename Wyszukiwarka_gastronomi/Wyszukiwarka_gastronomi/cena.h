#pragma once
#include"interfejs.h"
#include<iostream>
#include<vector>

class SortPrice {
public:
	std::vector<restauracja> PriceUp(int first, int last, std::vector<restauracja>ref);
	std::vector<restauracja> PriceDown(int first, int last, std::vector<restauracja>ref);

};

void cena_w_gore(std::vector<restauracja> ref);

void cena_w_dol(std::vector<restauracja> ref);
