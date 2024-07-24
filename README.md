# _printf

## Description

`_printf` is a custom function of the standard `printf` function in C, designed to format and print data. This version supports various format specifiers to display characters, strings, integers, and percentages.

## Supported Specifiers

- `%c` : Displays a character.
- `%s` : Displays a string of characters.
- `%%` : Displays a percent sign.
- `%d` : Displays a decimal integer.
- `%i` : Displays an integer.

## Main Functions

- `_printf` : The main function that processes a format string and additional arguments to output.
- `_char` : Prints a character.
- `_str` : Prints a string of characters.
- `_percent` : Prints a percent sign.
- `_int` : Prints an integer.

## Project Structure

- `main.h` : Contains function declarations and the `specifiers_t` structure.
- `functions.c` : Implements the functions `_char`, `_str`, `_percent`, `_int`, and `_putchar`.
- `format.c` : Contains the `_format` function that handles the different format specifiers.

## Usage

To use `_printf`, simply include `main.h` and compile your program with the source files.

You can compile using : 
- $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o my_printf *.c

## Contributors
Chatillon Jordan
Hitte Anzo

![Logo Holberton](https://mir-s3-cdn-cf.behance.net/project_modules/1400_opt_1/68c915164905349.63fe8050e15ef.png)