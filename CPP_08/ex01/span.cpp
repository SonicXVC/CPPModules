#include "span.hpp"

Span :: Span(void) : size(0) {}
Span :: ~Span(void) {}
Span :: Span(unsigned int n) : size(n) {}
Span :: Span(const Span & other) { *this = other; }

Span :: Span(std :: vector<int> :: iterator first, std :: vector<int> :: iterator last) {
	while (first != last)
		arr.push_back(*first++);
	size = arr.size();
}

Span & Span :: operator=(const Span & other) {
	if (this != &other) {
		size = other.size;
		arr = other.arr;
	}
	return *this;
}

void	Span :: addNumber(int n) {
	if (arr.size() != size)
		arr.push_back(n);
	else 
			throw std :: out_of_range("Out of range");
}

long	Span :: longestSpan(void) const {
	std :: vector<int> tmp(arr);
	if (arr.size() < 2)
		throw std :: overflow_error("To short to find longest span");
	else {
		sort(tmp.begin(), tmp.end());
		return tmp.at(tmp.size() - 1) - tmp.at(0);
	}
	return 0;
}

long	Span :: shortestSpan(void) const {
	std :: vector<int> tmp(arr);
	if (arr.size() < 2)
		throw std :: overflow_error("To short to find shortest span");
	else {
		sort(tmp.begin(), tmp.end());
		return tmp.at(1) - tmp.at(0);
	}
	return 0;
}