# 42 School - Libft
![norminette](https://github.com/TomWeimer/Libft/workflows/norminette/badge.svg) ![build](https://github.com/TomWeimer/Libft/workflows/build/badge.svg)
## Description
This project is the first project available in the curriculum of School 42.	The goal of this assignment is to create a simple library, that can be used in some of the future project.


Working on this project, you will learn the basics of a C library.
Among the functions of the libft, we find some of the most used in C, such as strlen, strcopy, calloc...<br>
Click [here](https://github.com/TomWeimer/Libft/blob/main/fr.subject.pdf) to see the complete subject of this project. 

## Installation

```zsh
git clone https://github.com/TomWeimer/Libft libft
```
## Usage

To use a library in C you need to add, in the source file using the library, the following code:
```C
#include  "libft.h"
```
You also need to link the library:
```C
gcc  foo.c -lft
```
Or if the library is not in the standard path:
```C
gcc  foo.c -L<path_to_the_libft> -lft
```
## Content of the library
### Mandatory functions:
The functions bellow are reproductions of others library functions:
| Standard C functions      |                      |                           |                           |                           |
| :------------------------ | :------------------- | :------------------------ | :------------------------ | :------------------------ |
| [ft_isalpha][1]           | [ft_strlen][6]       | [ft_strlcpy][11]          | [ft_strrchr][16]          | [ft_strnstr][20]          |
| [ft_isdigit][2]           | [ft_memset][7]       | [ft_strlcat][12]          | [ft_strncmp][17]          | [ft_atoi][21]             |
| [ft_isalnum][3]           | [ft_bzero][8]        | [ft_toupper][13]          | [ft_memchr][18]           | [ft_calloc][21]           |
| [ft_isascii][4]           | [ft_memcpy][9]       | [ft_tolower][14]          | [ft_memcmp][19]           | [ft_strdup][22]           |
| [ft_isprint][5]           | [ft_memmove][10]     | [ft_strchr][15]           |                           |                           |

The functions bellow are a choice of School 42:		
| Additional 42 functions: |                       |                       |                       |                     |
| :----------------------  | :-------------------- | :-------------------- | :-------------------- | :--------------     |
| [ft_substr][23]          | [ft_split][26]        | [ft_strmapi][28]      | [ft_putchar_fd][30]   | [ft_putendl_fd][32] |
| [ft_strjoin][24]         | [ft_itoa][27]         | [ft_striteri][29]     | [ft_putstr_fd][31]    | [ft_putnbr_fd][33]  |
| [ft_strtrim][25]
### Bonus functions:
The functions below aren't needed for validated the project:
| Additional 42 functions: |                       |                       |                       |                       |
| :----------------------  | :-------------------- | :-------------------- | :-------------------- | :-------------------- |
| [ft_lstnew][34]          | [ft_lstsize][36]      | [ft_lstadd_back][38]  | [ft_lstclear][40]     | [ft_lstmap][42]       |
| [ft_lstadd_front][35]    | [ft_lstlast][37]      | [ft_lstdelone][39]    | [ft_lstiter][41]      |

## Tests:
To test this library download the tester of @Tripouille:
```bash
git clone https://github.com/Tripouille/libftTester
```
Before executing the test:<br>
Go into the Makefile of the tester, and find this line:
```Makefile
LIBFT_PATH		= $(PARENT_DIR)
```
change it to the path to your library, example:
```Makefile
LIBFT_PATH		= ../../libft
```
then find this line:
```Makefile
CFLAGS	= -g3 -ldl -std=c++11 -I utils/ -I$(LIBFT_PATH)
```
and change it to:
```Makefile
CFLAGS	= -g3 -ldl -std=c++11 -I utils/ -I$(LIBFT_PATH)/includes
```
You can now launch the tester, with:
1. To execute the mandatory tests:	```make m```
2. To execute the bonuses tests:	```make b```
3. To execute both:	```make a```




[1]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_isalpha.c
[2]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_isdigit.c
[3]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_isalnum.c
[4]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_isascii.c
[5]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_isprint.c
[6]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_strlen.c
[7]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_memset.c
[8]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_bzero.c
[9]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_memcpy.c
[10]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_memmove.c
[11]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_strlcpy.c
[12]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_strlcat.c
[13]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_toupper.c
[14]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_tolower.c
[15]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_strchr.c
[16]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_strrchr.c
[17]:https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_strncmp.c
[18]:https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_memchr.c
[19]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_memcmp.c
[20]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_strnstr.c
[21]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_atoi.c
[22]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_calloc.c
[22]: https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_strdup.c
[23]:  https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_substr.c
[24]:  https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_strjoin.c
[25]:  https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_strtrim.c
[26]:  https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_split.c
[27]:  https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_itoa.c
[28]:  https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_strmapi.c
[29]:  https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_striteri.c
[30]:  https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_putchar_fd.c
[31]:  https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_putstr_fd.c
[32]:  https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_putendl_fd.c
[33]:  https://github.com/TomWeimer/Libft/blob/main/src/mandatory/ft_putnbr_fd.c
[34]:  https://github.com/TomWeimer/Libft/blob/main/src/bonus/ft_lstnew.c
[35]:  https://github.com/TomWeimer/Libft/blob/main/src/bonus/ft_lstadd_front.c
[36]:   https://github.com/TomWeimer/Libft/blob/main/src/bonus/ft_lstsize.c
[37]:   https://github.com/TomWeimer/Libft/blob/main/src/bonus/ft_lstlast.c
[38]:  https://github.com/TomWeimer/Libft/blob/main/src/bonus/ft_lstadd_back.c
[39]:  https://github.com/TomWeimer/Libft/blob/main/src/bonus/ft_lstdelone.c
[40]:  https://github.com/TomWeimer/Libft/blob/main/src/bonus/ft_lstclear.c
[41]:  https://github.com/TomWeimer/Libft/blob/main/src/bonus/ft_lstiter.c
[42]:  https://github.com/TomWeimer/Libft/blob/main/src/bonus/ft_lstmap.c



