# Push_swap

This repository contains my solution to the Push_swap project in the 42 network. The goal of this project is to sort a stack of integers using a set of predefined operations with the smallest possible number of moves. The project is written in C and adheres to the Norminette coding standards of 42.

## Overview

Push_swap is a sorting algorithm project where you're tasked with sorting a stack of integers using two stacks and a limited set of operations. The allowed operations are:

- `sa`: swap the first two elements of stack A
- `sb`: swap the first two elements of stack B
- `ss`: `sa` and `sb` combined
- `pa`: push the first element of stack A to the top of stack B
- `pb`: push the first element of stack B to the top of stack A
- `ra`: rotate stack A (shift all elements up by one)
- `rb`: rotate stack B (shift all elements up by one)
- `rr`: `ra` and `rb` combined
- `rra`: reverse rotate stack A (shift all elements down by one)
- `rrb`: reverse rotate stack B (shift all elements down by one)
- `rrr`: `rra` and `rrb` combined

The objective is to write two programs:

1. `push_swap`: Which takes a list of integers as arguments and outputs a series of operations that sort the stack.
2. `checker`: Which takes a series of operations and applies them to the stack. It then verifies if the stack is sorted.

## Usage

### Push_swap

Compile the `push_swap` program using the provided Makefile:

```bash
make
```
## To run the push_swap program:

```
./push_swap [list of integers]
```
For example:
```
./push_swap 4 67 2 34 12
```
### Checker
Compile the checker program using the provided Makefile:

```
make bonus
```
To run the checker program with a series of operations:

```
./push_swap [list of integers] | ./checker [list of integers]
```
For example:

```
./push_swap 4 67 2 34 12 | ./checker 4 67 2 34 12
```
