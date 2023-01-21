#pragma once

template <class T>
class SortedSequence{
private:
public:
   

    virtual ~Sequence(){}

    virtual T GetFirst() = 0;
    virtual T GetLast() = 0;
    virtual T Get(int index) = 0;
    virtual void Set(int index, T value) = 0;


    virtual int GetLength() = 0;
    virtual void Swap(int, int) = 0;

    virtual void Add(T item) = 0;
    virtual void print() = 0;
    //virtual void Resize(int) = 0;
    // virtual T operator[](int const index) = 0;
    virtual Sequence<T>* GetSubsequence(int startIndex, int endIndex) = 0;
    virtual Sequence<T>* Copy() = 0;
    virtual int IndexOf(T item) = 0;

    //virtual Sequence<T>* Concat(Sequence<T>* list) = 0;






};
