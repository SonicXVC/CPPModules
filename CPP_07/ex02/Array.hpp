#pragma once

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>
class Array {
	public:
		Array(void);
		Array(unsigned int _n);
		Array(const Array & other);
		~Array(void);
		Array & operator=(const Array & other);
		T & operator[](int i);
		unsigned int	size(void) const;
	private:
		T				*array;
		unsigned int	n;
};

template <class T>
Array<T> :: Array(void) : array(nullptr), n(0) {}

template <class T>
Array<T> :: Array(unsigned int _n) : n(_n) {
	if (n > 0)
		array = new T[n];
	else
		throw std :: overflow_error("Out of range");
}

template <class T>
Array<T> :: Array(const Array<T> & other) {
	*this = other;
}

template <class T>
Array<T> :: ~Array(void) {
	if (n > 0)
		delete [] array;
}

template <class T>
T & Array<T> :: operator[](int i) {
	if (i < 0 || static_cast<unsigned int>(i) > n - 1)
		throw std :: overflow_error("Out of range");
	else
		return array[i];
}

template <class T>
Array<T> & Array<T> :: operator=(const Array<T> & other) {
	if (this != &other) {
		n = other.n;
		array = new T[n];
		for (unsigned int i = 0; i < n; i++)
			array[i] = other.array[i];
	}
	return *this;
}

template <class T>
unsigned int Array<T> :: size(void) const {
	return n;
}

#endif