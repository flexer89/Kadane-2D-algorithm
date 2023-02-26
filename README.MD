
# 2D Kadane's Algorithm

This program is an implementation of the 2D Kadane's Algorithm. This algorithm is an extension of the Kadane's Algorithm, which is used to find the maximum sum subarray in a 1D array.

## Description

The 2D Kadane's Algorithm is used to find the maximum sum subrectangle in a 2D array. Given a 2D array of integers, the algorithm finds the rectangular subarray that has the largest sum of all possible subarrays. The subarray can have any dimensions, including a single element.

The algorithm works by computing the maximum sum subarray for each column in the array. It then combines these maximum sums to find the largest sum rectangle. This approach is based on the fact that any subrectangle can be represented as the difference between two column sums.

## Usage

The program takes a 2D array of integers as input and returns the maximum sum The input array can be provided in the console.

To use the program, follow these steps:

1.  Clone the repository to your local machine.
2.  Navigate to the directory containing the program files.
3.  Compile the program using a C++ compiler.
4.  Run the program and provide the input array.

## Example

Here is an example of how to use the program:

### Input Array

  ```c++
  0  -2  -7   0
  9   2  -6   2
 -4   1  -4   1
 -1   8   0  -2
 ```

### Output
```c++
Maximum Sum: 15
```
