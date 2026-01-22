*This project has been created as part of the 42 curriculum by rdamasce.*

# push_swap

## Description

The **push_swap** project consists of sorting a stack of integers using a limited set of operations and an auxiliary stack.  
The goal is to produce the smallest possible sequence of operations that sorts the numbers in ascending order.

This implementation focuses on the **radix sort algorithm**, which is particularly efficient for large input sizes.  
Before applying radix sort, the program normalizes the values by assigning each number an index based on its relative order. This allows the algorithm to work only with non-negative integers and bitwise operations.

The project strictly follows the constraints of the 42 curriculum, using only allowed operations and handling all error cases such as invalid input, overflow, and duplicate values.

## Instructions

### Compilation

To compile the project, run:

```bash
make
````

This will generate the executable `push_swap`.

### Execution

Run the program by passing a list of integers as arguments:

```bash
./push_swap 3 2 1 6 5 4
```

The program will output a sequence of operations that sorts stack A.

### Rules and behavior

* If no arguments are provided, the program exits silently.
* If the input is already sorted, no operations are printed.
* In case of invalid input (non-numeric values, duplicates, or integer overflow), the program prints `Error` to stderr and exits.
* The algorithm uses:

  * Simple sorting logic for very small stacks
  * Radix sort for larger stacks after index normalization

## Implementation overview

* Parsing and validation of arguments, including strict integer range checks
* Linked list implementation for stacks
* Indexing phase to normalize values
* Radix sort using bitwise operations
* Stack operations implemented according to push_swap rules

Main files:

* `parse.c`: argument validation and stack creation
* `indexing.c`: index assignment based on sorted order
* `radix.c`: radix sort logic
* `stack.c`: stack and node utilities
* `utils.c`: helper sorting and checking functions

## Resources

### Technical references

* 42 subject: push_swap
* Radix sort overview and binary representation
* Bitwise operations in C
* Linked lists in C
* Algorithmic complexity and optimization basics

### AI usage

AI tools were used as a learning and support resource for:

* Clarifying the radix sort algorithm and its adaptation to push_swap
* Reviewing edge cases related to parsing and overflow handling
* Improving code organization and readability

All implementation decisions, logic, and final code were written and validated by the author.