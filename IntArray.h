#pragma once
class IntArray
{
public:
    explicit IntArray(int sz = DefaultArraySize);
    IntArray(int* array, int array_size);
    IntArray(const IntArray& rhs);

    const int size() { return _size; }
    
    bool operator == (const IntArray&) const;
    bool operator != (const IntArray&) const;

    IntArray& operator = (const IntArray&);
    int size() const { return _size; };

    virtual int& operator[] (int index) { return ia[index; ] }
    virtual void sort();

    virtual int min();
    virtual int max();
    virtual int find();
    virtual ~IntArray() { delete[] ia; }

protected:
    void init(int sz, int* array);
    int _size;
    int* ia;
    static const int DefaultArraySize = 12;
};

