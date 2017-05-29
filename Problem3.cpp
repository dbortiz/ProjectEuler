// Dan Ortiz - 05/28/2017
// Project Euler - Problem 3 - Largest Prime Factor
// The prime factors of 13195 are 5, 7, 13 and 29.

// What is the largest prime factor of the number 600851475143 ?
#include <iostream>

long int wtf = 600851475143;

using namespace std;

int LPF(int, int);

int main(){
	cout << LPF(wtf, 2);

	return 0;
}

int LPF(int A, int B){
	if((A % B == 0) && (A / B > 1)){
		return LPF(A / B, B + 1);
	}else if ((A % B != 0) && A > B){
		return LPF(A, B + 1);
	}else{
		return A;
	}
}