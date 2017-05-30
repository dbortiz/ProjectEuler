// Dan Ortiz - 05/29/2017
// Project Euler - Problem 4 - Largest Palindrome Product
// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

// Find the largest palindrome made from the product of two 3-digit numbers.
#include <iostream>

using namespace std;

int main(){
	int a = 123456;
	int b = 123456;
	int arr[6], arr2[6];
	// Original sequence
	for(int i = 5; i >= 0; i--){
		arr[i] = a % 10;
		a /= 10;
	}

	// Palindrome
	for(int i = 0; i < 6; i++){
		arr2[i] = b % 10;
		b /= 10;
	}

	cout << arr[5]<< endl;
	cout << arr2[0];
	return 0;
}