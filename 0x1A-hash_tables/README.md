# Hash Tables Project

This is a project that focuses on implementing hash tables in C. It covers various aspects of hash tables, including hash functions, collision handling, and basic operations such as creating, adding, and retrieving elements from a hash table.


## Introduction

The project aims to provide a solid understanding of hash tables and their applications. It explores the implementation of hash functions, collision handling techniques, and the general use of hash tables in solving real-world problems. The project is written in C and follows specific guidelines and requirements.

## Learning Objectives

By completing this project, you will be able to:

- Explain what a hash function is and how it works.
- Identify the characteristics of a good hash function.
- Understand the concept of a hash table and its underlying data structure.
- Implement collision handling techniques in the context of a hash table.
- Evaluate the advantages and drawbacks of using hash tables.
- Recognize common use cases where hash tables are beneficial.

## Requirements

To work on this project, you need:

- An Ubuntu 20.04 LTS operating system
- GCC compiler
- Allowed editors: vi, vim, emacs
- The project's files and resources from the [GitHub repository](https://github.com/username/repo)

## Tasks

The project consists of several tasks, each addressing specific aspects of hash tables. Here is an overview of the tasks:

1. Task 0: Create a hash table
   - Prototype: `hash_table_t *hash_table_create(unsigned long int size)`
   - Description: Write a function that creates a hash table.
  
2. Task 1: Implement the djb2 hash function
   - Prototype: `unsigned long int hash_djb2(const unsigned char *str)`
   - Description: Write a hash function using the djb2 algorithm.

3. Task 2: Find the index of a key in a hash table
   - Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size)`
   - Description: Write a function that gives you the index of a key in a hash table.

4. Task 3: Add an element to a hash table
   - Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value)`
   - Description: Write a function that adds an element to a hash table.

5. Task 4: Retrieve a value from a hash table
   - Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key)`
   - Description: Write a function that retrieves a value associated with a key from a hash table.

## Tests

The project includes a set of test files to verify the correctness of the implemented functions. You can run these tests to validate your code. The test files are located in the "tests" directory of the project repository.

To compile and run the tests, use the following command:
```shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 tests/test_file.c path/to/implemented_functions.c -o test
./test
```
