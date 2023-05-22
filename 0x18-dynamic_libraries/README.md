**Dynamic Libraries**
***
This project focuses on dynamic libraries in the C programming language. It covers various concepts and techniques related to dynamic libraries, including their creation, usage, and differences compared to static libraries. The project also introduces tools and commands for analyzing and working with dynamic libraries.
***
**Requirements**
The project has specific requirements and constraints for both C code and Bash scripts. These include:

C
1. The code must be written in C.
2. The allowed editors for writing C code are vi, vim, and emacs.
3. All C files will be compiled on Ubuntu 20.04 LTS using gcc with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89.
4. All C files should end with a new line.
5. A README.md file at the root of the project folder is mandatory.
6. The code should follow the Betty style, and it will be checked using betty-style.pl and betty-doc.pl.
7. The use of global variables is not allowed.
8. Each C file should contain no more than 5 functions.
9. Standard library functions like printf, puts, etc., are forbidden. However, _putchar is allowed.
10. The main.h header file should include the prototypes of all functions used in the project.
11. The main.h header file should be pushed to the repository.
***
Bash
1. The scripts will be tested on Ubuntu 20.04 LTS.
2. All Bash files should end with a new line.
3. The first line of each Bash file should be #!/bin/bash.
4. A README.md file, describing each script's functionality, is mandatory.
4. All Bash files must be executable.
***
**Tasks**
The project consists of several tasks, each focusing on a specific aspect of dynamic libraries. These tasks are as follows:

0. A library is not a luxury but one of the necessities of life
Create a dynamic library named libdynamic.so containing various functions. The library should include functions such as _putchar, _islower, _isalpha, _abs, _isupper, _isdigit, _strlen, _puts, _strcpy, _atoi, _strcat, _strncat, _strncpy, _strcmp, _memset, _memcpy, _strchr, _strspn, _strpbrk, and _strstr. If any of these functions are not implemented, they should be empty but have the correct prototype. The main.h file should include prototypes for all these functions.

1. Without libraries, what have we? We have no past and no future
Create a Bash script named 1-create_dynamic_lib.sh that creates a dynamic library called liball.so from all the .c files present in the current directory.

2. Let's call C functions from Python
Create a Python script that calls functions from a dynamic library. The dynamic library used should be libdynamic.so, and the Python script should be named 2-add.py. The script should demonstrate calling the _strlen function from the dynamic library and printing the result.

3. Let's call C functions from Python #2
Create another Python script that calls functions from a dynamic library. The dynamic library used should be libdynamic.so, and the Python script should be named 3-div.py. The script should demonstrate calling the _div function from the dynamic library, which divides two numbers and prints the result.
