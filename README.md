# TT1 request

## Description

`tt1_incorrect.c` contains the code submitted during TT1,
and `tt1_fixed.c` contains the minor changes required
for the code to work correctly.

## Usage

Clone the repository, then run `make` to compile the files.

Run `./<name of the executable> <quote enclosed string>` to use the compiled
code for testing.

Run `vimdiff tt1_fixed.c tt1_incorrect.c` for comparison of difference between
submitted solution and a form of correct solution.

## Reason

The submitted code compiles without errors, and only contains 2 minor logic 
errors that prevent it from working correctly:

1. (-1) Off-by-one error during the for loop, fixed by moving a block of the
condition outside the loop. This also makes the malloc call below allocate the
correct and exact size for the requested string.

    a. The format of writing code with pen and paper makes it difficult
to edit and move code around in time-constrained setting.

2. (-1) Incorrect usage of strcpy, fixed by replacing it with separate array 
assignments.

3. Temporarily allocating a buffer char array in the stack was not disallowed.

Therefore, in my opinion, the penalty should be at most -2, instead of -3.
