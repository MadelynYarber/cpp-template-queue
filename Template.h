#include <iostream>
using namespace std;

template <class T>
class QuickQueue
{
private:
T** array;
int counter;
int size;
public:
QuickQueue();
QuickQueue(const QuickQueue<T>& q); //Copy constructor
QuickQueue operator=(const QuickQueue<T>& q); //Deep copy assignment overload
~QuickQueue(); //A Destructor
void Enqueue(T item); //add an element to the queue
T Dequeue(); //removes an element to the queue
T* GetQueue(unsigned int n);
int GetSize();
void Print();
};

#include "Template.hpp"