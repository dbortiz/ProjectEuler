// Dan Ortiz - 06/04/2017
// Project Euler - Problem 5 - Smallest Multiple
// 2520 is the smallest multiple number that can be divided by each of the numbers fom 1 to 10 without any remainder.

// What is the smallest positive number that is evenly dividible by all of the numbers from 1 to 20?
#include <iostream>

using namespace std;

int divise(int, int);

int main(){
	int num = 1;
	cout << divise(num, 1);
	return 0;
}

int divise(int num, int div){
	if(num % div == 0 && div < 10){
		return divise(num, div + 1);
	}else if(num % div == 0 && div == 10){
		return num;
	}else{
		return divise(num + 1, 1);
	}
}