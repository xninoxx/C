#include <stdio.h>

// ARGUMENT PARSING (`argc` and `argv`):
// When you run a C program from the terminal, the operating system passes 
// command-line arguments straight into your `main()` function:
// 
// 1. `argc` (Argument Count): An integer representing the total number of arguments passed, 
//    including the program's own name (which is always index 0).
// 2. `argv` (Argument Vector): An array of pointers (`char *argv[]`).
//    POINTER JUSTIFICATION: Instead of duplicating heavy argument strings in memory, 
//    the OS passes an array of memory addresses (`char *`), where each pointer 
//    points directly to the start of a command-line string.
int main(int argc, char *argv[]) {
    printf("Total arguments (argc): %d\n\n", argc);

    // Loop through each argument pointer from 0 up to argc - 1
    for (int i = 0; i < argc; i++) {
        // `argv[i]` is a pointer (`char *`) pointing to the i-th argument string.
        // The `\"` sequences are escape characters used to print literal double quotes around the output.
        printf("argv[%d] = \"%s\"\n", i, argv[i]);
    }

    return 0;
}

/*
Example execution in the terminal:
./argvParsing -v -n 5 notes.txt

Total arguments (argc): 5

argv[0] = "./argvParsing"
argv[1] = "-v"
argv[2] = "-n"
argv[3] = "5"
argv[4] = "notes.txt"
*/