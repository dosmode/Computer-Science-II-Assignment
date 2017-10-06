
#include <iostream>
#include <string>
using namespace std;

template <class THING>
class vector {
private:
	THING * items;
public:
	int arraySize;
	int arrayCapacity;

	vector() {
		arraySize = 0;
		arrayCapacity = 0;
		items = new THING[arrayCapacity];
	}
	vector(int a) {
		arraySize = a;
		arrayCapacity = a;
		items = new THING[a];

		for (int i = 0; i<a; i++) {
			items[i] = 0;
		}

	}
	vector(int a, const THING &b) {
		arraySize = a;
		arrayCapacity = a;
		items = new THING[a];
		for (int i = 0; i < a; i++) {
			items[i] = b;
		}

	}
	int size() {
		return arraySize;
	}
	int capacity() {
		return arrayCapacity;
	}
	THING & operator[](unsigned int index)
	{
		// Allows user to access elements in the vector by using [] notation

		return items[index];
	}

	void push_back(int a) {

		if (arraySize >= arrayCapacity) {
			arrayCapacity = arraySize * 2;
			resize(arrayCapacity);

			items[arraySize++] = a;
		}
		else {

			items[arraySize++] = a;
		}

	}
	void resize(int a) {
		THING * newItems;
		newItems = new THING[a];
		for (int i = 0; i < arraySize; i++) {
			newItems[i] = items[i];
		}
		items = newItems;

		delete[] items;

	}

	THING back() {
		return items[arraySize];
	}
	THING pop_back() {

		return items[arraySize--];
	}

};

