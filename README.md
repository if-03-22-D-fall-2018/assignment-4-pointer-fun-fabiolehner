## IF.03.01 Procedural Programming
# Assignment Pointer Fun

## Objective
This assignment lets you practise a bit more with the difference between references and values.

## Materials
- Atom or any other editor
- gcc
- terminal.

## Required Tasks
1. Create a file called `pointer_func.c` and write a `main` function which declares
   - an integer variable `int_value`
   - a pointer to an integer `int_pointer`

3. Assign some values to the variables. Take care how to assign a value to the pointer. What is possible there? Describe this briefly in a comment right after this line of code.

2. Define a function `print_integers` which accepts the following paramters
   - an integer variable `int_value`
   - a pointer to an integer `int_pointer`
   
   The function shall print *the values* of both parameters in the following form
   `Got an integer value <x> and an address to an integer with value <y>` where `<x>` and `<y>` shall be replaced by the actual values of the parameters passed.
   
4. Call the function `print_integers` in the `main` function and test your implementation.

5. Define a function `change_integers` which accepts the same parameters as `print_integers`. In the function body the values of the two parameters shall be changed to some different values.

6. Call the function `change_integers` and then again call `print_integers` at the end of the `main` function. Which values are changed, which are not? Why? Describe this briefly in a comment right after the call of the functions.

7. Describe the five scenarios which can occur when declaring and using variables (declare a value, declare a pointer, get the value, get the value of a pointer, get the pointer of a value). Make a table as follows (two scenarios are already filled out for you to give you a more precise picture what to be done here). Write this table by hand, scan it (or take a photo) and add it to your repository. The name of the file shall be `scenarios.jpg` or `scenarios.png`.

| Declaration/Usage | Scenario | Syntax Example | Description of the Example
| --- | --- |--- | --- |
| Declaration | Declaration of a value | `int x` | A variable of type `int` is declared. This variable can hold an integer value |
| Declaration | | | |
| Usage | Using a value | `foo(x)` | The function `foo()` is called and the value of a variable `x` is passed to it |
| Usage | | | |
| Usage | | | |

## Hints
- Take care to keep the work loop "Implement a little", "Test a little" to avoid the 100 lines of error mess.

## Extra Credit
Document your implementation in an extra text file or in an inline comment. In particular:
- Write down the reasons, how you assigned values to the variables in the main function.
- Give alternatives how to pass parameters when calling the different functions.
- Write down the reasons, why some variables are not changed by `change_integers`.

## Evaluation
All coding assignments will get checked. Most common reasons that your assignment is marked down are:

- Program does not build or builds with warnings
- One or more items in the *Required Tasks* section are not satisfied
- Submitted code is visually sloppy and hard to read

## Things to Learn
- Repeat using primitive data types, like integer, float/doubles
- Repeat implementing functions
- Repeat pointer handling on primitive data types
