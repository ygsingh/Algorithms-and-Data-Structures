#include <iostream>

int fibonacci_fast(int n) {
    // write your code here
	int fib_array [n];	// declare an integer array of size n to store Fibinacci sequence
	fib_array[0] = 0;	// First Fibonacci number n = 0 
	fib_array[1] = 1;	// Second Fibonacci number n = 1
	if (n <= 1)
        return n;		// Return n if n <=1
	if (n>=2){
		for (int i = 2; i <= n; ++i){
			fib_array[i] = fib_array[i-1] + fib_array[i-2];
		}
		return fib_array[n]; // Return F(n) = F(n-1) + F(n-2)
		
	}
	    
}


int main() {
    int n = 0;		// 
    std::cin >> n;	// Standard input from command prompt

    std::cout << fibonacci_fast(n) << '\n'; // Standard Output
    return 0;
}
