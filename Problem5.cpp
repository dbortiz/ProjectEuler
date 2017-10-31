// Dan Ortiz - 06/04/2017
// Project Euler - Problem 5 - Smallest Multiple
//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?
#include <iostream>
using namespace std;

bool checkDivisibility(int&);

const long int SIZE = 1000000000;
struct Node {
	int number;
	Node *next;
	Node(int numberValue, Node* nextValue) {
		number = numberValue;
		next = nextValue;
	}
};

int main() {
	Node *start = NULL;

	for (int i = 2520; i < SIZE; i = i + 20) {
		if (!checkDivisibility(i)) {
			start = new Node(i, start);
		}
	}

	Node *print = start;
	while (print != NULL) {
		cout << print->number << endl;
		print = print->next;
	}

	system("PAUSE");
	return 0;
}

bool checkDivisibility(int &number) {
	int i = 1;
	while (number % i == 0 && i < 20) {
		i++;
	}
	if (i == 20 && number % 20 == 0) {
		return false;
	}
	else {
		return true;
	}

}