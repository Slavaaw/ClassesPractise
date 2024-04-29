#include "IntArray.h"

void IntArray::init(int sz, int* array) {
    _size = sz;
    ia = new int[_size];
    for (int ix = 0; ix < _size; ++ix) {
        if (!array) { ia[ix] = 0; }
        else { ia[ix] = array[ix]; }
    }

}
IntArray::IntArray(int sz) {
    init(sz, 0);
}

IntArray::IntArray(int* array, int array_size) {
    init(array_size, array);
}

IntArray::IntArray(const IntArray& rhs) {
    init(rhs._size, rhs.ia);
}