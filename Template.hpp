//#include "Template.h"

#ifndef _TEMPLATE_HPP
#define _TEMPLATE_HPP

template<class T>
QuickQueue<T>::QuickQueue()
{
 size = 5;
 counter = 0;
 array = new T*[size];
}

template<class T>
QuickQueue<T>::~QuickQueue()
{
    for(int i = 0; i < counter; i++)
    {
        delete array[i];
    }
    delete [] array;
}

template<class T>
QuickQueue<T>::QuickQueue(const QuickQueue<T>& q)
{
    delete [] array;
    array = new T[q.GetSize()];
    for (int i = 0; i < q.GetSize(); i++)
    {
        array[i] = q.GetQueue(i);
    }
    counter = q.GetSize();
}

template<class T>
void QuickQueue<T>::Enqueue(T item)
{
    if(size==counter)
    {
        size += 5;
        
        T** arrays = new T*[size];
        for (int i = 0; i < size; i++)
        {
        arrays[i] = array[i];
        }
        delete [] array;
        array = arrays;
        size++; 
    }
	//cout << counter << endl;
    array[counter] = new T;
    *array[counter] = item;
    counter++;

}

template<class T>
T QuickQueue<T>::Dequeue()
{
    T retVal = *array[0];
    for(int i = 0; i < size; i++)
    {
        array[i] = array[i+1];
    }
    counter--;
return retVal;
}

template<class T>
void QuickQueue<T>::Print()
{
    for(int i = 0; i < counter; i++)
    {
        cout << *array[i] << " ";
    }
}

template<class T>
int QuickQueue<T>::GetSize()
{
  return counter;
}


#endif