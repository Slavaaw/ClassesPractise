#ifndef IntArrayRC_H
#define IntArrayRC_H

#include "IntArray.h"
#include <cassert>

class IntArrayRC : public IntArray
{
public:
	IntArrayRC(int sz = DefaultArraySize);
	IntArrayRC(const int* array, int array_size);
	IntArrayRC(const IntArrayRC& rhs);

	virtual int& operator[] (int) const;

private:
	void const check_range(int ix);
};
#endif

int& IntArrayRC::operator[](int index) const
{
	check_range(index); // Я не понимаю, почему этот блок кода не работает, если кто поймёт, дайте знать, пожалуйста
	return ia[index];
};

inline void const IntArrayRC::check_range(int index) {
	assert(index >= 0 && index < _size);
};
