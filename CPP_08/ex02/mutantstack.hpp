#pragma once

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <class T>
class MutantStack : public std :: stack<T> {
	public:
		MutantStack(void);
		MutantStack(const MutantStack & other);
		~MutantStack(void);
		MutantStack & operator=(const MutantStack & other);
		typedef typename std :: stack<T> :: container_type :: iterator 			iterator;
		typedef typename std :: stack<T> :: container_type :: reverse_iterator	reverse_iterator;
		iterator			begin(void);
		iterator 			end(void);
		reverse_iterator	rbegin(void);
		reverse_iterator 	rend();
};

template <class T>
MutantStack<T> :: MutantStack(void) {}

template <class T>
MutantStack<T> :: ~MutantStack(void) {}

template <class T>
MutantStack<T> :: MutantStack(const MutantStack<T> & other) {
	*this = other;
}

template <class T>
MutantStack<T> & MutantStack<T> :: operator=(const MutantStack<T> & other) {
	static_cast<void>(other);
	return *this;
}

template <class T>
typename MutantStack<T> :: iterator MutantStack<T> :: begin(void) {
	return this->c.begin();
}

template <class T>
typename MutantStack<T> :: iterator MutantStack<T> :: end(void) {
	return this->c.end();
}

template <class T>
typename MutantStack<T> :: reverse_iterator MutantStack<T> :: rbegin(void) {
	return this->c.rbegin();
}

template <class T>
typename MutantStack<T> :: reverse_iterator MutantStack<T> :: rend(void) {
	return this->c.rend();
}

#endif
