# push_swap

## Description
The `push_swap` project is a sorting algorithm challenge from the 42 curriculum. The objective is to sort a stack of integers using a limited set of stack operations while minimizing the number of moves.

## Features
- Handles stacks of varying sizes
- Implements efficient sorting algorithms
- Uses a linked list data structure
- Optimized for minimal operations

## Allowed Operations
- `sa` (swap a): Swap the first two elements of stack A
- `sb` (swap b): Swap the first two elements of stack B
- `ss` (swap a & b): Swap the first two elements of both stacks
- `pa` (push a): Move the first element of stack B to stack A
- `pb` (push b): Move the first element of stack A to stack B
- `ra` (rotate a): Shift all elements of stack A up by one
- `rb` (rotate b): Shift all elements of stack B up by one
- `rr` (rotate a & b): Shift both stacks up by one
- `rra` (reverse rotate a): Shift all elements of stack A down by one
- `rrb` (reverse rotate b): Shift all elements of stack B down by one
- `rrr` (reverse rotate a & b): Shift both stacks down by one

## Files Overview
- `push_swap.c` - Initializes stacks, validates input, and starts the sorting process
- `push_swap.h` - Header file containing function prototypes and struct definitions
- `sort.c` - Contains sorting logic for different cases
- `Makefile` - Compilation instructions for the project

## Compilation & Usage
### Compile
Run the following command to compile the project:
```bash
make
```

### Execute
Run the program with a list of integers:
```bash
./push_swap 5 2 8 1 3
```
The program will output the necessary operations to sort the given numbers.

