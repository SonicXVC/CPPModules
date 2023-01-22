#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main(void) {
	std :: cout << "---VECTOR---" << std :: endl;
	{
		int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 7, 6, 5, 4, 3, 2, 1};
		int n = sizeof(arr) / sizeof(arr[0]);
		std :: vector<int> test1(arr, arr + n);
		try {
			std :: vector<int> :: iterator it1 = easyfind(test1, 5);
			std :: cout << *it1 << std :: endl;
			std :: vector<int> :: iterator it = easyfind(test1, -5);
			std :: cout << *it << std :: endl;
		}
		catch (std :: exception & e) {
			std :: cerr << e.what() << std :: endl;
		}
	}
	std :: cout << "----LIST----" << std :: endl;
	{
		std :: list<int> test2;
		test2.push_back(10);
		test2.push_back(30);
		test2.push_back(50);
		test2.push_back(60);
		test2.push_back(80);
		test2.push_back(100);
		test2.push_back(20);
		test2.push_back(50);
		test2.push_back(60);
		test2.push_back(40);
		try {
			std :: list<int> :: iterator it1 = easyfind(test2, 60);
			std :: cout << *it1 << std :: endl;
			std :: list<int> :: iterator it2 = easyfind(test2, -5);
			std :: cout << *it2 << std :: endl;
		}
		catch (std :: exception & e) {
			std :: cerr << e.what() << std :: endl;
		}
	}
	return 0;
}