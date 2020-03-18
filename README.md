![](https://www.holbertonschool.com/holberton-logo.png)

# Printf function

This repository show an modded printf function in C programming language, it contain some basics features and function found in the manual 3 of printf and add some others like conversion to hexadecimal, binary.
## Installation

Use git clone to get all the code in your local machine [click here](https://pip.pypa.io/en/stable/) 
```bash
https://github.com/dairof7/printf.git
```
Use this command to compile the code 
```bash
gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
```

| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| d or i | Signed decimal integer |
| s  | String of characters  |
| b  | Signed binary  |
| o  | Signed octal  |
| u  | Unsigned integer  |
| x  | Unsigned hexadecimal  |
| X  | Unsigned hexadecimal (uppercase)  |
| R  | ROT13 translation of string |
| r  | Reverse string of characters |
| %  | Character  |

## Testing cases

```python
Chars

printf("Expected   : %cc\n", 'a');
_printf("Actual     : %cc\n", 'a');
printf("Expected   : %c\n", 53);
_printf("Actual     : %c\n", 53);
printf("Expected   : %c.\n", '\0');
_printf("Actual     : %c.\n", '\0');
printf("Expected   : %%%c\n", 'y');
_printf("Actual     : %%%c\n", 'y');

Outputs

Expected   : ac
Actual     : ac
Expected   : 5
Actual     : 5
Expected   : .
Actual     : .
Expected   : %y
Actual     : %y
```


```python
Strings

printf("Expected   : %s\n", "holberton");
_printf("Actual     : %s\n", "holberton");
printf("Expected   : %s$\n", "");
_printf("Actual     : %s$\n", "");
printf("Expected   : %sschool\n", "holberton");
_printf("Actual     : %sschool\n", "holberton");

Outputs

printf("Expected   : %s\n", "holberton");
_printf("Actual     : %s\n", "holberton");
printf("Expected   : %s$\n", "");
_printf("Actual     : %s$\n", "");
printf("Expected   : %sschool\n", "holberton");
_printf("Actual     : %sschool\n", "holberton");
```

```python
rot13 (%R)

a = _printf("%R\n", "Holberton school");
printf("%d\n", a);

Outputs

Ubyoregbafpubby
16
```


```python
Decimal to binary (%b)

_printf("Dec: %i -> Bin:%b\n", 9875, 9875);

Outputs

Dec: 9875 -> Bin:10011010010011
```


```python
Decimal to Hexadecimal (%x) and uppercase (%X)

_printf("Dec: %i -> Hex:%x\n", 456375, 456375);
_printf("Dec: %i -> Hex:%X\n", 456375, 456375);

Outputs

Dec: 456375 -> Hex:6f6b7
Dec: 456375 -> Hex:6F6B7
```


```python
Decimal to Octal (%o)

_printf("Dec: %i -> Oct:%o\n", 456375, 456375);

Outputs

Dec: 456375 -> Oct:1573267
```


```python
Integers (%d)(%i)

_printf("Int: %i \n", 456375);
_printf("MaxInt: %i \n", INT_MAX);
_printf("MaxInt: %i \n", INT_MIN);

Outputs

Int: 456375 
MaxInt: 2147483647 
MinInt: -2147483648 
```


```python
Unsigned Integer (%u)

_printf("Unsigned Int: %u \n", 456375);
_printf("MaxUnsignedInt: %u \n", UINT_MAX);

Outputs

Unsigned Int: 456375 
MaxUnsignedInt: 4294967295
```

------------

## File Functions

### _printf.c
Own Printf Function Tha Performs Formatted Output Conversion And Print Data.

------------

### selector.c
Select each Specifier and  call a function

------------

### holberton.h
Own all the prototypes.

------------
### basic_functions.c
Own basic functions to process char and string data.

------------
### convert.c
Own base conversion functions.

------------
### number_functions.c
Own functions to print number like integer and unsigned integer.

------------
### text_functions.c
Own functions to print char and strings

------------
### Authors
**_[Eduardo Ramos](https://github.com/somarae8)_ and _[Dairo Facundo](https://github.com/dairof7)_.**

------------

### End