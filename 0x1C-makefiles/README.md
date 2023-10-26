##0x1C. C - Makefiles

**Project Overview**
This project focuses on understanding and implementing Makefiles in C programming. You will learn about Make, Makefiles, when and why to use Makefiles, rules, variables, and more. The goal is to gain a deep understanding of these concepts and apply them to create effective Makefiles.

***

**Learning Objectives**

By the end of this project, you should be able to explain, without external assistance:

**General**
1. What are Make and Makefiles?
2. When, why, and how to use Makefiles.
3. What are rules and how to set and use them.
4. What are explicit and implicit rules.
5. What are the most common and useful rules.
6. What are variables and how to set and use them.

***

**Tasks**

Task 0: Creating Your First Makefile (0-Makefile)
Create your first Makefile.
Requirements:
Name of the executable: school
Rule: all
The all rule builds your executable
Variables: None
***
Task 1: Makefile with Variables (1-Makefile)
Create a Makefile with variables.

Requirements:
Name of the executable: school
Rule: all
The all rule builds your executable
Variables: CC (compiler to be used) and SRC (source .c files).

***
Task 2: A More Useful Makefile (2-Makefile)
Create a more advanced Makefile.

Requirements:
Name of the executable: school
Rule: all
The all rule builds your executable
Variables: CC (compiler to be used), SRC (source .c files), OBJ (object .o files), and NAME (name of the executable).
The all rule should recompile only the updated source files.

***
Task 3: Makefile with Clean, Oclean, Fclean, and Re (3-Makefile)
Create a Makefile with cleaning and recompilation rules.

Requirements:
Name of the executable: school
Rules: all, clean, oclean, fclean, re
The all rule builds your executable
The clean rule deletes Emacs and Vim temporary files along with the executable
The oclean rule deletes the object files
The fclean rule deletes Emacs and Vim temporary files, the executable, and the object files
The re rule forces recompilation of all source files
Variables: CC, SRC, OBJ, NAME, RM (program to delete files)
The all rule should recompile only the updated source files.

***
Task 4: A Complete Makefile (4-Makefile)
Create a comprehensive Makefile.
Requirements:
Name of the executable: school
Rules: all, clean, fclean, oclean, re
The all rule builds your executable
The clean rule deletes Emacs and Vim temporary files along with the executable
The oclean rule deletes the object files
The fclean rule deletes Emacs and Vim temporary files, the executable, and the object files
The re rule forces recompilation of all source files
Variables: CC, SRC, OBJ, NAME, RM, CFLAGS (compiler flags: -Wall -Werror -Wextra -pedantic)
The all rule should recompile only the updated source files.

***
Task 5: Island Perimeter (5-island_perimeter.py)
Technical interview preparation: Create a Python function to calculate the perimeter of an island described in a grid.

Requirements:
Function signature: def island_perimeter(grid):
grid is a list of lists of integers where 0 represents a water zone and 1 represents a land zone.
Each cell in the grid is a square with side length 1 unit.
Grid cells are connected horizontally and vertically (not diagonally).
Grid is rectangular, with both width and height not exceeding 100 units.
The grid is completely surrounded by water, and there is only one island (or nothing).
The island doesn't contain "lakes" (water inside that isn't connected to the water around the island).

***
##License
Copyright © 2023 ALX. All rights reserved.
