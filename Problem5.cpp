// Dan Ortiz - 06/04/2017
// Project Euler - Problem 5 - Smallest Multiple
// 2520 is the smallest multiple number that can be divided by each of the numbers fom 1 to 10 without any remainder.

// What is the smallest positive number that is evenly dividible by all of the numbers from 1 to 20?
#include <iostream>

using namespace std;

bool checkDivisibility(int);
int smallestMult(int);

int main(){
	int num = 2000;
	cout << smallestMult(num);
	return 0;
}

bool checkDivisibility(int num){
	if(num % 1 == 0 && num % 2 == 0 && num % 3 == 0 && num % 4 == 0 && num % 5 == 0 && num % 6 == 0 && num % 7 == 0 && num % 8 == 0 &&
	num % 9 == 0 && num % 10 == 0 ){
		return true;
	}else{
		return false;
	}

}

int smallestMult(int num){
	if(checkDivisibility(num)){
		 return num;
	}else{
		return smallestMult(num + 1);
	}
}