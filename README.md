# ft_printf

The objective of this project is to recreate the printf function, implementing the followings conversions:<br><br>
  <table>  
    <thead>
        <tr>
            <th colspan=3><h4>Specifiers</h4></th>
        </tr>
        <tr>
            <th>Format Specifier</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
	</thead>
        <tr>
            <td align="center">%</td>
            <td>% Followed by another % character writes % to the screen.</td>
        </tr>
        <tr>
            <td align="center">c</td>
            <td>Writes a single character.</td>
        </tr>
        <tr>
            <td align="center">s</td>
            <td>Writes a character string.</td>
        </tr>
        <tr>
            <td align="center">p</td>
            <td>Writes an implementation-defined character sequence defining a pointer address.</td>
        </tr>
        <tr>
            <td align="center">d / i</td>
            <td>Writes a signed integer to decimal representation.</td>
        </tr>
        <tr>
            <td align="center">u</td>
            <td>Writes an unsigned integer to decimal representation.</td>
        </tr>
        <tr>
            <td align="center">x / X</td>
            <td>Writes an unsigned integer to hexadecimal representation.</td>
        </tr>
    </tbody>
  </table>
</table>

## Usage

`make` builds `libftprintf.a`, a static library, not an executable. To see the results, compile the library with the test program in `main_test.c`:

```sh
make
gcc -Wall -Wextra -Werror main_test.c libftprintf.a && ./a.out
```

The test prints the output of `printf` and `ft_printf` so you can compare them.

## Status
Finished: 13/11/2023

--

Made by: lauriago, lauriago@student.42barcelona.com
