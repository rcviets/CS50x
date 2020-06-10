#include <stdio.h> /*import file that defines printf*/

int main(void) /*start program*/ {
    printf("hello, world\n");/*f stands for format..must use double quotes
                            without new line, command terminal $ will run at very end of program
                            ex. hello, world$*/
}

/*terminal*/
/*
$ clang objC01.c  {create a.out for file}
$ ./a.out {will run the a.out program}

{output}
hello,world
*/

/*compiling*/
/*
clang = "C languages" ; compiler written by a group of people
a.out = "assembly output" ; binary code for a program

source code = written code
machine code = binary instructions
compiler = turn source code into machine code
*/

/*
binary file can be renamed with command
clang -o "a.out file name"
    ex.
        $clang -o hello objC01.c
        $./hello
*/

/*terminal commands*/
/*
ls = list files - those with * are executable
rm = remove file - requires confirmation
clear = clear terminal
*/

#include <cs50.h>
#include <stdio.h>
/*built in libraries for now*/

int main(void) {
    string name = get_string("What's your name?\n"); /*name = variable that must be a string
                                                    get_string = function */
    printf("hello, %s\n", name); /*%s = placeholder*/
}

/*terminal*/
/*
$clang -o string objC01.c -lcs50 {-l links this file to the cs50 library}
$./string

** make uses clang to compile code with all necessary argruments, or flags passed in
    ex.
$make string {output the same as line 55}
$./string
*/

