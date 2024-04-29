#pragma once
class IntArray
{
public:
    explicit IntArray(int sz = DefaultArraySize);
    IntArray(int* array, int array_size);
    IntArray(const IntArray& rhs);

    const int size() { return _size; }
    ~IntArray() { delete[] ia; }

private:
    void init(int sz, int* array);
    int _size;
    int* ia;
    static const int DefaultArraySize = 12;
};

