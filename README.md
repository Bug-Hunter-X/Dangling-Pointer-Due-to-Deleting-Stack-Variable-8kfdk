# Dangling Pointer Due to Deleting Stack Variable

This repository demonstrates a common C++ error: attempting to delete a pointer to a stack-allocated variable. This leads to undefined behavior and can cause crashes or other unpredictable results.

## Bug Description
The `bug.cpp` file contains a `main` function that declares an integer variable `x` on the stack. It then creates a pointer `ptr` that points to `x`.  The problem arises when the code attempts to use `delete` on `ptr`.  `delete` is intended for deallocating memory dynamically allocated using `new`, not for stack variables.  Doing so results in a dangling pointer and undefined behavior.

## Bug Solution
The `bugSolution.cpp` file shows the correct way to handle this scenario. Stack-allocated variables are automatically deallocated when they go out of scope. No explicit deallocation using `delete` is required or allowed for them. 