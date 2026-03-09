*This project has been created as part of the 42 curriculum by aramos.*

# libft

## Description

**libft** is a custom C library developed as part of the 42 curriculum at 42. The goal of this project is to recreate several functions from the standard C library as well as additional utility functions that will be reused throughout future projects.

By implementing these functions from scratch, the project strengthens understanding of fundamental programming concepts such as memory manipulation, string processing, modular programming, and data structures in C.

The result of this project is a **static library (`libft.a`)** that can be linked to other C programs to provide commonly used functions.

---

## Features

### Reimplemented Standard Functions

The library includes custom implementations of common functions normally found in the C standard library.

Examples include:

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_strlen`
* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_memchr`
* `ft_memcmp`
* `ft_strnstr`
* `ft_atoi`
* `ft_toupper`
* `ft_tolower`

### Additional Utility Functions

Additional helper functions extend the library’s usefulness.

Examples:

* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_itoa`
* `ft_strmapi`
* `ft_striteri`
* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

### Bonus – Linked List Functions

The bonus part introduces linked list manipulation through a custom `t_list` structure.

Examples:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

---

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

This will create the static library:

```
libft.a
```

### Makefile Commands

```
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and the compiled library
make re     # Recompile the entire project
make bonus  # Compile bonus linked list functions
```

### Using the Library

1. Include the header file in your program:

```c
#include "libft.h"
```

2. Compile your program with the library:

```
cc main.c libft.a
```

or

```
cc main.c -L. -lft
```

3. Run the executable:

```
./a.out
```

---

## Usage Example

Example program using `libft`:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, libft!";
    printf("Length: %zu\n", ft_strlen(str));
    return (0);
}
```

Compile and run:

```
cc main.c libft.a
./a.out
```

---

## Resources

### Documentation

* POSIX Manual Pages – https://man7.org/linux/man-pages/
* GNU C Library documentation – https://www.gnu.org/software/libc/manual/

### Tutorials and References

* https://cplusplus.com/reference/cstring/
* https://www.geeksforgeeks.org/c-programming-language/
* https://www.tutorialspoint.com/cprogramming/

### Use of AI

AI tools were used during the development of this project for:

* Understanding certain behaviors of standard C functions
* Debugging and identifying edge cases
* Reviewing code for readability and structure
* Assisting in writing and organizing the project documentation (README)

All implementations were written, tested, and validated manually to ensure correctness and compliance with the project requirements.
