# ft_printf

This repository contains a custom implementation of the `printf` function in C. The `ft_printf` function formats and prints data types such as strings, numbers, and pointers to the standard output or a specified file descriptor.

## Flags
- **%c**: Character
- **%s**: String
- **%p**: Pointer
- **%d** or **%i**: Decimal integer
- **%u**: Unsigned decimal integer
- **%x**: Hexadecimal (lowercase)
- **%X**: Hexadecimal (uppercase)
- **%%**: Literal percent sign

### Project Structure
- **src/**: Contains the C source files.
  - `ft_printf.c`: Main implementation of the `ft_printf` function.
  - `ft_putchar.c`: Function to write a character to a file descriptor.
  - Other auxiliary functions for printing strings, numbers, and pointers.
- **includes/**: Contains the header files.
  - `ft_printf.h`: Function declarations and necessary includes.
- **Makefile**: Automates the build process.

## Example Usage

#### Step 1: Compilation

To compile the library, run the following command:

```bash
make
```

This will generate the `libftprintf.a` file.

#### Step 2: Main

```c
#include "includes/ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! Welcome to %dSP.", "cadete", 42); 
}
```
You can add more tests using the example above.

#### Step 3: Cleaning Up

To remove object files:

```bash
make clean
```

To remove both object files and the compiled library:

```bash
make fclean
```
#### Step 5: Run the Test

For additional tests and resources to validate your ft_printf project, you can use the ft_printf Tester repository by Tripouille. It provides an extensive set of tests for evaluating your implementation.

Check out the repository here: https://github.com/Tripouille/ft_printf_tester.
