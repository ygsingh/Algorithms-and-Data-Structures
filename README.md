# Algorithm and Data Structure 
This is a repository of various algorithm and data structure problems.
## 1. Maximum Pairwise Product
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

## 2. Fibonacci Sequence

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
