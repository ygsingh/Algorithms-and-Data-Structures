#include <iostream>

// GCD is implemented based on Euclidean algorithm
// https://www.geeksforgeeks.org/euclidean-algorithms-basic-and-extended/

int gcd_rsa(int a, int b) {
	int current_gcd = 1;
	int high = 0;
	int low = 0;
	int temp = 0;
	
	//Sorting the input to always be in decending order needed otherwise the answer is always 1

	if (a > b) {
		high = a;
		low = b;
	}
	else {
		high = b;
		low = a;			
	}
	
	// Euclidean algorithm implementation 

	while(low != 0){
		
		temp = high;
		high = low;
		low = temp % low;
		current_gcd = high;
		
	}
	return current_gcd;
}

int main() {
  int a, b;
  std::cin >> a >> b;	//Input two integers
  std::cout << gcd_rsa(a,b)<<std::endl; //Output GCD
  return 0;
}
