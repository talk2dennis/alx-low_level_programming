# 0x07-pointers_arrays_strings

0. memset
> function that fills memory with a constant byte.
> Prototype: char *_memset(char *s, char b, unsigned int n);
> The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
> Returns a pointer to the memory area s

1. memcpy
> a function that copies memory area.
> The _memcpy() function copies n bytes from memory area src to memory area dest
> Returns a pointer to dest

2. strchr
> a function that locates a character in a string.
> Prototype: char *_strchr(char *s, char c);
> Returns a pointer to the first occurrence of the character c
> in the string s, or NULL if the character is not found

3. strspn
> function that gets the length of a prefix substring.
> Prototype: unsigned int _strspn(char *s, char *accept);
> Returns the number of bytes in the initial segment of s which consist only of bytes from accept

4. strpbrk
> function that searches a string for any of a set of bytes.
> Prototype: char *_strpbrk(char *s, char *accept);

5. strstr
> function that locates a substring.
> Prototype: char *_strstr(char *haystack, char *needle);

6. Chess is mental torture
>  function that prints the chessboard.
> Prototype: void print_chessboard(char (*a)[8]);

