#include <iostream>
#include <list>

using namespace std;

void print(const list<int>& my_list) {
	cout << "list content: { ";
	for (const int& num : my_list)
		cout << num << " ";
	cout << "}\n\n";
}

int main() {

	list <int> numbers;
	int value = 0;

	cout << "Pushing back...\n";
	while (value >= 0) {
		cout << "Enter number: ";
		cin >> value;
		if (value >= 0) {
			numbers.push_back(value);
		}
	}
	print(numbers);

	value = 0;
	cout << "Pushing front...\n";
	while (value >= 0) {
		cout << "Enter number: ";
		cin >> value;
		if (value >= 0) {
			//lists have a push_front function but vectors don't, they need numbers.insert(numbers.begin(), value);
			numbers.push_front(value);
		}
	}
	print(numbers);

	//This gets deleted because of the change to a list
//	int index = 0;
//
//
//	cout << "Inserting by index...\n";
//	while (index >= 0) {
//		cout << "Enter index: ";
//		cin >> index;
//		if (index >= 0) {
//			cout << "Enter value: ";
//			cin >> value;
//			//changing vectors to lists mean, this doesn't work because lists don't support random access
//			//list iterators do not support the addition operators
//			numbers.insert(numbers.begin() + index, value);
//		}
//	}
//	print(numbers);
//
//	index = 0;
//
//
//	cout << "Modifying existing elements...\n";
//	while (index >= 0) {
//		cout << "Enter index: ";
//		cin >> index;
//		if (index >= 0) {
//			cout << "Enter value: ";
//			cin >> value;
//			numbers[index] = value;
//		}
//	}
//	print(numbers);
//
//
	return 0;
}