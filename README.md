# ft_printf

## Description

`ft_printf` is my own custom implementation of the standard C library function `printf`. It mimics the behavior of `printf` with support for format specifiers and variable argument lists, providing a flexible and powerful way to format and print text in C.

## Features

- Supports standard format specifiers:
  - `%c` : Character
  - `%s` : String
  - `%p` : Pointer address
  - `%d` : Decimal integer
  - `%i` : Integer
  - `%u` : Unsigned integer
  - `%x` : Hexadecimal (lowercase)
  - `%X` : Hexadecimal (uppercase)
  - `%%` : Percent symbol

- Handles variable arguments using `va_list`.

## Usage

To use the `ft_printf` function in your project:

1. Include the header in your source code:
    ```c
    #include "ft_printf.h"
    ```

2. Call `ft_printf` just like you would with `printf`:
    ```c
    ft_printf("Hello, %s! You are number %d.\n", "World", 42);
    ```

## Installation

Clone this repository and compile the source files along with your project:

```bash
git clone https://github.com/girts521/ft_printf.git
cd ft_printf
make
```

##  License

This project is distributed under the MIT License. See the LICENSE file for details.

## Contact
If you have any questions or feedback, feel free to create an issue on this repository.
