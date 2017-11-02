// Dan Ortiz - 11/01/2017
// Project Euler - Problem 4 - Largest Palindrome Product
// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

// Find the largest palindrome made from the product of two 3-digit numbers.
#include <iostream>
#include <string>

using namespace std;

bool checkPalindrome(int&); //Prototype to Palindrome function

struct Node { //struct to hold numbers that are palindromes
	int number;
	Node *next;
	Node(int numberValue, Node *nextValue) {
		number = numberValue;
		next = nextValue;
	}
};


int main() {
	int currentNumber = 0; //int to hold the current number the palindrome function would check
	Node *arr = NULL; //Created head of list
	for (int i = 100; i < 1000; i++) { //Nested for-loop to multiply two 3-digit numbers
		for (int j = 100; j < 1000; j++) {
			currentNumber = i * j;
			if (checkPalindrome(currentNumber)) { //Checks if the number is a palindrome
				arr = new Node(currentNumber, arr); //Creates another node and adds to list if number passes palindrome check
			}
		}
	}

	while (arr != NULL) { //while-loop to print out the nodes' number values
		cout << arr->number << endl;
		arr = arr->next;
	}
	system("PAUSE");
	return 0;
}

//Function to check whether a number is a palindrome
bool checkPalindrome(int &i) { 
	string num = to_string(i); //Converts the number from an int to a string
	int lengthOfString = num.length(); //int to hold the length value of the number
	int not = 0; //int to break out of loop
	for (int i = 0; i < lengthOfString; i++) { //for-loop to check if the indexes's values are mirrored
		if (num[i] != num[lengthOfString - i - 1]) { //if-statement to compare indexes
			not = 1; //If the number is not a palindrome, it assigns not to 1 and breaks 
			break; 
		}
	}
	if (not) { //if-else statement to return true or false on whether the number is a palindrome or not
		return false;
	}
	else {
		return true;
	}
}