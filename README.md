# Algorithmic Toolbox course on Coursera
Following codes are my attempt at solving the selected few programming challenges of the ![Algorithmic Toolbox course](https://www.coursera.org/learn/algorithmic-toolbox/home/welcome). Here I put these solutions, which are only for your reference purpose. And I hope you don't copy any part of the code.
## <a name="tableoc"></a> Table of Content
- [Maximum Pairwise Product](#maxprod)
- [Fibonacci Sequence](#fibseq)
- [Greatest Common Divisor](#gcd)
- [Least Common Multiple](#lcm) 

## <a name="maxprod"></a> Maximum Pairwise Product 
<p style='text-align: right;'> [Back To Top](#tableoc) </p>
Find the maximum product of two distinct numbers in a sequence of non-negative integers. <br /> 
**Problem Statement:** Given a sequence of non-negative integers ![](https://latex.codecogs.com/gif.latex?a_1%2C%20%5Cdots%20%2C%20a_n), compute <p align="center">
  ![](https://latex.codecogs.com/gif.latex?%5Cmax%5Climits_%7B1%5Cleq%20i%5Cneq%20j%20%5Cleq%20n%7D%20a_i%20%5Ccdot%20a_j)
</p>

**Input format:** The first line contains an integer _n_. The next line contains _n_ non-negative integers ![](https://latex.codecogs.com/gif.latex?a_1%2C%20%5Cdots%20%2C%20a_n) (separated by spaces).<br />
**Output format:** Maximum value that can be obtained by multiplying two different elements from the sequence. <br />
**Constrains:** ![](https://latex.codecogs.com/gif.latex?2%20%5Cleq%20n%20%5Cleq%202%20%5Ccdot%2010%5E5%20%3B%200%20%5Cleq%20a_1%2C%20%5Cdots%20%2C%20a_n%20%5Cleq%202%20%5Ccdot%2010%5E5)
### Sample
**Input:**  <br /> 
```cpp
3
3 4 6
```
**Output:**  <br /> 
```cpp
24
```
### Code
[Maximum Pairwise Product](https://github.com/ygsingh/cpp_codes/blob/master/max_pairwise_product.cpp)

## <a name="fibseq"></a> Fibonacci Sequence 
<p style='text-align: right;'> [Back To Top](#tableoc) </p>
A detailed explanation of Fibonacci Sequence is given [here](https://en.wikipedia.org/wiki/Fibonacci_number). </br>
**Problem Statement:** Ginen an integer _n_, find the _nth_ Fibonacci number ![](https://latex.codecogs.com/gif.latex?F_n) <br />

**Input format:** The input consists of a single integer _n_.

**Output format:** Output ![](https://latex.codecogs.com/gif.latex?F_n)

**Constraint:** ![](https://latex.codecogs.com/gif.latex?0%20%5Cleq%20n%20%5Cleq%2045)

### Sample 1
**Input:**  <br /> 
```cpp
1
```
**Output:**  <br /> 
```cpp
1
```
### Sample 2
**Input:**  <br /> 
```cpp
8
```
**Output:**  <br /> 
```cpp
21
```
### Code
[Fibonacci Sequence](https://github.com/ygsingh/cpp_codes/blob/master/fibonacci.cpp)

## <a name="gcd"></a> Greatest Common Divisor 
<p style='text-align: right;'> [Back To Top](#tableoc) </p>
Greatest common divisor (GCD) of two non-negative integers _a_ and _b_ (which are both not equal to zero) is the gratest integer _c_ that divides both _a_ and _b_. Algorithm is implemented based on [Euclidean algorithm](https://en.wikipedia.org/wiki/Euclidean_algorithm) for computing the GCD.

**Problem Statement:** Given two integers  _a_ and _b_, find their greatest common divisor.<br />

**Input format:** The two integers  _a_, _b_ are given in the same line separated by space.<br />
**Output format:** Output GCD.<br />
**Constrains:** ![](https://latex.codecogs.com/gif.latex?1%20%5Cleq%20a%2Cb%20%5Cleq%202%20%5Ccdot%2010%5E9)

### Sample
**Input:**  <br /> 
```cpp
18 35
```
**Output:**  <br /> 
```cpp
1
```
### Code
[GCD](https://github.com/ygsingh/cpp_codes/blob/master/gcd.cpp)

## <a name="lcm"></a>  Least Common Multiple 
<p style='text-align: right;'> [Back To Top](#tableoc) </p>
Least common multiple (LCM) of two positive integers _a_ and _b_ is the least positive integer _m_ that is divisible by both _a_ and _b_.

**Problem Statement:** Given two integers _a_ and _b_, find their least common multiple.<br />

**Input format:** The two integers _a_ and _b_ are given in the same line seperated by space.<br />
**Output format:** Output LCM.<br />
**Constrains:** ![](https://latex.codecogs.com/gif.latex?1%20%5Cleq%20a%2Cb%20%5Cleq%202%20%5Ccdot%2010%5E7)

### Sample
**Input:**  <br /> 
```cpp
6 8
```
**Output:**  <br /> 
```cpp
24
```
### Code
[LCM](https://github.com/ygsingh/cpp_codes/blob/master/lcm.cpp)
