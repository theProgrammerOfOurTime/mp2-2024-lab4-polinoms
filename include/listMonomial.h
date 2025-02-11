#pragma once
#include <iostream>

struct Monomial
{
	std::pair<int, double> data;
	Monomial()
	{
		data = { 0, 0.0 };
	}
	Monomial(const std::pair<int, double>& data)
	{
		this->data = { data.first, data.second };
	}
};

struct listMonomial
{
	Monomial monomial;
	listMonomial* next;
	listMonomial() : next(nullptr) { }
	listMonomial(listMonomial*& next) : next(next) { }
	listMonomial(Monomial monomial) : next(nullptr), monomial(monomial) { }
};