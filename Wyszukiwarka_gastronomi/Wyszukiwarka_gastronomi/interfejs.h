#pragma once
#include<iostream>
#include "baza_gastronomi.h"
#include"find.h"
#include"cena.h"

void interfejs();

void interfejs_wyszukiwarka(std::vector<restauracja> ref);

void interfejs_dodaj();

void interfejs_filtry();

void interfejs_przegladaj(std::vector<restauracja>ref);

void print_all(std::vector<restauracja>ref);



