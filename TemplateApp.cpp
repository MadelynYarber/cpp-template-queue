#include "Template.h"
#include <iostream>

using namespace std;

int main()
{
QuickQueue<int> queueInt;
QuickQueue<double> queueDouble;

cout << "Current int queue: " << endl;
queueInt.Print();

cout << "Current double queue: " << endl;
queueDouble.Print();

cout << "Adding 5 numbers to int queue: " << endl;
queueInt.Enqueue(1);
queueInt.Enqueue(2);
queueInt.Enqueue(3);
queueInt.Enqueue(4);
queueInt.Enqueue(5);
queueInt.Print();
cout << endl;

cout << "Adding 5 numbers to double queue: " << endl;
queueDouble.Enqueue(1.23);
queueDouble.Enqueue(2.34);
queueDouble.Enqueue(3.45);
queueDouble.Enqueue(4.56);
queueDouble.Enqueue(5.67);
queueDouble.Print();
cout << endl;

cout << "Removing 5 numbers from int queue: " << endl;
cout << queueInt.Dequeue() << endl;
cout << queueInt.Dequeue() << endl;
cout << queueInt.Dequeue() << endl;
cout << queueInt.Dequeue() << endl;
cout << queueInt.Dequeue() << endl;
cout << endl;

cout << "Removing 5 numbers from double queue: " << endl;
cout << queueDouble.Dequeue() << endl;
cout << queueDouble.Dequeue() << endl;
cout << queueDouble.Dequeue() << endl;
cout << queueDouble.Dequeue() << endl;
cout << queueDouble.Dequeue() << endl;

return 0;
}