#include <iostream>

// a * b = GCD * LCM
// GCD is implemented based on Euclidean algorithm (See file gcd.cpp for more details)

// GCD routine
int gcd_rsa(int a, int b) {
	int current_gcd = 1;
	int high = 0;
	int low = 0;
	int temp = 0;
	if (a > b) {
		high = a;
		low = b;
	}
	else {
		high = b;
		low = a;			
	}
	
	while(low != 0){
		
		temp = high;
		high = low;
		low = temp % low;
		current_gcd = high;
		
	}
	return current_gcd;
}

long long lcm_fast(int a, int b) {
	return ((long long)(a/gcd_rsa(a, b))*b); // a * b = GCD * LCM
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
