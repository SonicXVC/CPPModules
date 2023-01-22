#pragma once

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <algorithm>

template <typename T>
typename T :: iterator easyfind(T & container, int value) {
	typename T :: iterator res = find(container.begin(), container.end(), value);
	if (res == container.end())
		throw std :: range_error("Value not found");
	return res;
}

#endif