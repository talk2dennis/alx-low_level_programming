# 0x09. C - Static libraries
> 0. A library is not a luxury but one of the necessities of life
> > Create the static library libmy.a containing all the functions listed below:
- int _putchar(char c);
- int _islower(int c);
- int _isalpha(int c);
- int _abs(int n);
- int _isupper(int c);
- int _isdigit(int c);
- int _strlen(char *s);
- void _puts(char *s);
- char *_strcpy(char *dest, char *src);
- int _atoi(char *s);
- char *_strcat(char *dest, char *src);
- char *_strncat(char *dest, char *src, int n);
- char *_strncpy(char *dest, char *src, int n);
- int _strcmp(char *s1, char *s2);
- char *_memset(char *s, char b, unsigned int n);
- char *_memcpy(char *dest, char *src, unsigned int n);
- char *_strchr(char *s, char c);
- unsigned int _strspn(char *s, char *accept);
- char *_strpbrk(char *s, char *accept);
- char *_strstr(char *haystack, char *needle);

## step to create lib in c
```
gcc -c *.c // this will compile to object or machine code all your c files

// creating your achive
ar -rc libmy.a *.o
// -rc is to create and replace old archive
// create you indexing
ranlib libmy.a
// list all your libraries
ar -t libmy.a
nm libmy.a 
```
