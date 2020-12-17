#ifndef HOMEWORK_4_CPP
#define HOMEWORK_4_CPP

#include "homework_4.h"

namespace ipb {

	template<typename T>
	std::vector<T>& named_vector<T>::vector() { 
		if (named_vector<T>::name_ == "") {
			std::vector<T> empty_vector;
			return empty_vector;
		} else {
			return named_vector<T>::v_;  
		}
	}

	template<typename T>
	long unsigned int named_vector<T>::size() { 
		if (named_vector<T>::name_ == "") {
			return 0;
		} else {
			return named_vector<T>::v_.size(); 
		}
	}

	template<typename T>
	auto named_vector<T>::capacity() { return named_vector<T>::v_.capacity(); }

	template<typename T>
	std::string& named_vector<T>::name() { return  named_vector<T>::name_; }

	template<typename T>
	void named_vector<T>::reverse() {
		if (named_vector<T>::name_ != "") {
			named_vector<T>::v_.reverse(named_vector<T>::v_.begin(), named_vector<T>::v_.end()); 
		}
	}

	/* ipb algorithm */
	template <typename T>
	T accumulate(named_vector<T> nv, T s) {
		
		for (int i = 0; i < nv.v_.size(); i++) {
			s = std::move(s) + nv.v_[i];
			std::cout << nv.v_[i] << std::endl;
		}

		return s;
	}

} // namespace ipb

#endif