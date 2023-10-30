
# 0x15. C - File I/O

> C **Syscall**

## How to use the flags O_RDONLY, O_WRONLY, O_RDWR

1. Write a function that reads a text file and prints it to the POSIX standard output.
> - Prototype: ssize_t read_textfile(const char *filename, size_t letters);
> - where letters is the number of letters it should read and print

2. Create a function that creates a file.
> - Prototype: int create_file(const char *filename, char *text_content);
> - where filename is the name of the file to create and text_content is a NULL terminated string to write to the file

3. Write a function that appends text at the end of a file.
> - Prototype: int append_text_to_file(const char *filename, char *text_content);
> - where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file

4. Write a program that copies the content of a file to another file.
> - Usage: cp file_from file_to
> - if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error


