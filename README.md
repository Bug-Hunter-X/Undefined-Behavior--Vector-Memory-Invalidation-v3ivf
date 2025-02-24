# C++ Vector Invalidation Bug
This repository demonstrates a common C++ bug related to invalidating iterators or pointers when using `std::vector`.  Modifying the vector's size after obtaining a pointer to its elements leads to undefined behavior because the vector might reallocate its internal memory.

## Bug Description
The bug occurs when accessing vector elements via raw pointers and then modifying the vector in a way that might resize it.  The pointer becomes invalidated, and dereferencing it after the vector's size changes results in unpredictable program behavior.

## How to Reproduce
1. Clone this repository.
2. Compile and run the `bug.cpp` file.  You will likely observe erratic behavior, such as a crash or incorrect output.

## Solution
The solution involves avoiding the use of raw pointers to vector elements.  Use iterators instead, which are automatically updated when the vector is resized. Alternatively, only access vector elements while avoiding any operations that would potentially resize the vector. See `bugSolution.cpp` for an example using iterators.