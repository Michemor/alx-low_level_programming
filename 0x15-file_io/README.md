# FILE INPUT/OUTPUT  (C, SysCall)

## GENERAL

* man or help
- open()
- read()
- write()
- dprintf()

### File Descriptors

These are non-negative integer values that represent process-unique identifier for a file or other input/output process
The three statndard file descriptors are:
   Integer representation    Name                   POSIX IDENTIFIER
-  (0)                       standard input         STDINFILE_NO
-  (1)                       standard ouptut        STDOUT_FILENO
-  (2)                       starndard error        STDERR_FILENO

### FLAGS

1. O_RDONLY - file can be read only
2. O_WRONLY - file can be written to only
3. O_RDWR   - file can be written to and read from

### FILE PERMISSIONS

These are set on a file if used with open() function.It is optional and is used to set the level of access of the file by the programmer
They Include: 
- S_IRUSR   - user can read the file only
- S_IRWUSR  - user can read and write file only
- S_IRWXU   - user can read, write and execute file

### SYSTEM CALL

This is a request made to the kernel to access service, file or execute a process.
It provides interface between the process and the operating system
Examples of system calls are open(), close(), write(), and read().

#### Differenece between function and system call
1. A system call is made is to the kernel code while function call is made by a program to perform a specific task
2. System call also allows for context switching  (between the user and the kernel mode) while a function call does not provide for this functionality.

