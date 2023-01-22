#pragma once

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
#include <stdexcept>

class Span {
	public:
		Span(void);
		Span(const Span & other);
		Span(unsigned int n);
		Span(std :: vector<int> :: iterator first, std :: vector<int> :: iterator last);
		~Span(void);
		Span & operator=(const Span &other);
		void	addNumber(int n);
		long	shortestSpan(void) const;
		long	longestSpan(void) const;
	private:
		std :: vector<int> arr;
		unsigned int	size;
};

#endif