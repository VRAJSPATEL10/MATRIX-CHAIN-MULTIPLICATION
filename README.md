# Matrix Chain Multiplication (MCM) Program

This C program calculates the optimal way to multiply a chain of matrices with minimal scalar multiplications. It implements the Matrix Chain Multiplication algorithm using Dynamic Programming, displaying the cost matrix and optimal multiplication sequence.

## Features

- **Optimal Matrix Chain Multiplication**: Finds the optimal sequence for multiplying matrices to minimize computational cost.
- **Dynamic Cost Matrix Calculation**: Builds a matrix that stores minimum multiplication costs for matrix pairs.
- **Loading Animation**: Displays a loading animation during calculations.

## Prerequisites

- A C compiler, such as GCC
- A terminal or command prompt for compiling and running the program

## Getting Started

1. **Clone the Repository**: Clone or download the file.
2. **Compile the Code**
3. **Run the Program**`

## Usage

1. **Enter the Number of Matrices**: Specify the number of matrices you want to multiply.
2. **Enter Matrix Dimensions**: Input the dimensions for each matrix in the sequence.
3. **Cost Matrix and Optimal Sequence**: The program will display:
   - A cost matrix showing minimum multiplication costs.
   - The optimal multiplication sequence to achieve minimal multiplications.
4. **Minimal Multiplication Result**: The program outputs the minimum number of multiplications required.

## Example

************** MATRIX CHAIN MULTIPLICATION(MCM) ********************

ENTER THE NUMBER OF ELEMENTS: 4

ENTER THE DIMENSIONS: P0: 10 P1: 20 P2: 30 P3: 40 P4: 30

CALCULATING...

COST MATRIX M: m[1][2]: 6000 m[1][3]: 18000 m[1][4]: 30000 ...

MULTIPLICATION SEQUENCE : ((A1 A2) (A3 A4)) MINIMUM NUMBER OF MULTIPLICATIONS ARE : 30000


## Notes

- The number of matrices is one less than the number of dimensions input (i.e., for `n` matrices, you need `n+1` dimensions).
- The algorithm uses dynamic programming to optimize matrix chain multiplication efficiently.
