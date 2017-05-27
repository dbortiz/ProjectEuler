// Dan Ortiz - 05/27/2017
// Project Euler - Problem 1 - Multiples of 3 and 5
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>

using namespace std;

int multipleOf(int, int);

int main(){
	int sumOfMultiples = (multipleOf(3, 3) + multipleOf(5, 5)) - multipleOf(15, 15);

	cout << "The sum of the multiples of 3 or 5 below 1000: " << sumOfMultiples << endl;
	

	return 0;
}

int multipleOf(int mult, int num){
	if(mult < 1000){
		return mult + multipleOf(mult + num, num);
	}else{
		return 0;
	}
}