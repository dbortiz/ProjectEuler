//Dan Ortiz - 11/01/2017
//Project Euler - Problem 6 - Sum Square Difference

/*The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>

using namespace std;

int sumOfSquares(int); //Prototype for sumOfSquares function
int sum(int); //Prototype sum function

int main() {
	int squareOfSum = sum(1) * sum(1); //Squares the sum of 1 - 100
	cout << squareOfSum - sumOfSquares(1) << endl; //Prints difference of squares
	system("PAUSE");
	return 0;
}

int sumOfSquares(int number) { //Recursive function that adds numbers the squared numbers 1 - 100
	if (number < 101) { //Base-case to stop function from going over 100
		return (number * number) + sumOfSquares(number + 1); //Squares a number and adds the next number squared
	}
	else {
		return 0;
	}
}

int sum(int number) { //Recursive function to add numbers 1 - 100
	if (number < 101) { //Base-case to stop function from going over 100
		return number + sum(number + 1); //Adds a number with the next
	}
	else {
		return 0;
	}
}