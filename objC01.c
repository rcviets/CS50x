#include <stdio.h> /*import file that defines printf*/

int main(void) /*start program*/ {
    printf("hello, world\n");/*f stands for format..must use double quotes
                            without new line, command terminal $ will run at very end of program
                            ex. hello, world$*/
}

/*
source code = written code
machine code = binary instructions
compiler = turn source code into machine code
*/

/*compiling*/
/*
clang = "C languages" ; compiler written by a group of people
a.out = "assembly output" ; binary code for a program

*terminal*

$ clang objC01.c  {create a.out for file}
$ ./a.out {will run the a.out program}

{output}
hello,world
*/

/*
binary file can be renamed with command
clang -o "a.out file name"
    ex.
        $clang -o hello hello.c
        $./hello
*/

/*terminal commands*/
/*
ls = list files - those with * are executable
rm = remove file - requires confirmation
*/

