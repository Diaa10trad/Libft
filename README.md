*This activity has been created as part of the 42 curriculum by daltrad.*

# Libft

## Description

Libft is my first C library, built as part of the 42 curriculum. The goal is to re-implement a set of standard C functions, write some additional utility
functions, and build a small linked-list toolkit, all packaged in a static
library (`libft.a`) that I can reuse in future 42 projects.

The library has three parts:

**Part 1 - Libc functions** (same behavior as the originals, with the `ft_` prefix)
- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- Character conversion: `ft_toupper`, `ft_tolower`
- Strings: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- Memory: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- Conversion: `ft_atoi`

**Part 2 - Additional functions**
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
- `ft_strmapi`, `ft_striteri`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

**Part 3 - Linked lists**, using the `t_list` structure (`content` and `next`):
- Creating and adding: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- Reading: `ft_lstsize`, `ft_lstlast`
- Deleting: `ft_lstdelone`, `ft_lstclear`
- Iterating: `ft_lstiter`, `ft_lstmap`

All functions follow the 42 Norm, are compiled with `-Wall -Wextra -Werror`, use
no global variables, and free all the heap memory they are responsible for.

## Instructions

Build the library from the root of the repository:

```sh
make        # builds libft.a
make clean  # removes the object files
make fclean # removes the object files and libft.a
make re     # rebuilds everything from scratch
```

To use it in your own program, include the header and link the library:

```c
#include "libft.h"
```

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Resources

- `man` pages of the original libc functions (`man 3 strlen`, `man 3 memmove`, etc.)
- The 42 Norm (norminette) documentation
- Learning material on pointers, linked lists, and dynamic memory allocation

**How AI was used:** I used Claude as a tutor while working on the project. It answered my deep questions regarding all the topics in the project, as I wanted to have a strong understanding of each topic, such as explaining concepts like (pointers, `memmove` overlap, linked lists).
