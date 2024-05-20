#pragma once
#include<iostream>
#include"interfejs.h"
#include"LinkedList.h"

class SortRank {
public:

	Node RankUp(Node& ref);
	Node RankDown(Node& ref);

};

void ocena_w_gore(Node& ref);
void ocena_w_dol(Node& ref);