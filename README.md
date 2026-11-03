# ft_printf

A reimplementation of the C `printf` function, built as a static library for the 42 curriculum.

## Prototype

```c
int ft_printf(const char *format, ...);
```

Returns the number of characters written, or `-1` if a write fails.

## Supported conversions

| Specifier | Output |
| --- | --- |
| `%c` | A single character |
| `%s` | A string |
| `%p` | A pointer address in hexadecimal |
| `%d`, `%i` | A signed decimal integer |
| `%u` | An unsigned decimal integer |
| `%x`, `%X` | An unsigned hexadecimal integer, in lowercase or uppercase |
| `%%` | A percent sign |

Flags, field width and precision are not supported.

## How it works

`ft_printf` walks through the format string and writes each character as it goes. When it finds a `%`, it reads the next argument with `va_arg` and passes it to the matching helper function. Each helper returns how many characters it wrote, which gives the total.

## Usage

`make` builds `libftprintf.a`, a static library, not an executable. To see the results, compile the library with the test program in `main_test.c`:

```sh
make
gcc -Wall -Wextra -Werror main_test.c libftprintf.a && ./a.out
```

The test prints the output of `printf` and `ft_printf` so you can compare them.

To use the library in your own project, include `ft_printf.h` and link it when compiling:

```sh
gcc main.c -L. -lftprintf
```

## Makefile rules

| Rule | Action |
| --- | --- |
| `make` | Builds the library |
| `make clean` | Removes the object files |
| `make fclean` | Removes the object files and the library |
| `make re` | Rebuilds everything from scratch |
