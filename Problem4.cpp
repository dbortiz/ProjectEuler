// Dan Ortiz - 05/29/2017
// Project Euler - Problem 4 - Largest Palindrome Product
// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

// Find the largest palindrome made from the product of two 3-digit numbers.
#include <iostream>
#include <array>
using namespace std;

void Palindrome(const int);
bool checkArrays(int [], int []);

int main(){
int num;

// Loop to test out numbers
for (int i = 100; i < 1000; i++){
	for (int j = 100; j < 1000; j++){
		num = i * j;
		Palindrome(num);
		}
	}
	return 0;
}

// Function to determine palindrome or not
void Palindrome(const int num){
	int arr[6];
	int arr2[6];
	int num1 = num;
	int num2 = num;


	for(int i = 5; i >= 0; i--){
		arr[i] = num1 % 10;
		num1 /= 10;
	}

	for(int i = 0; i < 6; i++){
		arr2[i] = num2 % 10;
		num2 /= 10;
	}


	if(checkArrays(arr, arr2)){
		cout << num << endl;
	}
}

bool checkArrays(int arr[], int arr2[]){
	for(int i = 0; i < 6; i++){
		if(arr[i] != arr2[i]){
			return false;
		}
	}
	return true;
}