// Dan Ortiz - 05/29/2017
// Project Euler - Problem 4 - Largest Palindrome Product
// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

// Find the largest palindrome made from the product of two 3-digit numbers.
#include <iostream>
using namespace std;

void Palindrome(int);

int main(){
int num;

// Loop to test out numbers
for (int i = 100; i < 999; i++){
	for (int j = 100; j < 999; j++){
		num = i * j;
		Palindrome(num);
		}
	}
	return 0;
}

// Function to determine palindrome or not
void Palindrome(int num){
	int arr[6];
	int arr2[6];

	for(int i = 5; i >= 0; i--){
		arr[i] = num % 10;
		num /= 10;
	}

	for(int i = 0; i < 6; i++){
		arr2[i] = num % 10;
		num /= 10;
	}

	if(arr == arr2){
		cout << num;
	}
}