#ifndef HOMEWORK_4_H
#define HOMEWORK_4_H

#include <iostream>
#include <vector>
#include <algorithm>

namespace ipb {

	template <typename T>
	struct named_vector {
		std::vector<T> v_;
		std::string name_;

		std::vector<T>& vector();
		long unsigned int size();
		auto capacity();
		std::string& name();
		void reverse();
	};

	template <typename T>
	T accumulate(named_vector<T> nv, T s);


} //namespace ipb

#include "homework_4.cpp"

#endif