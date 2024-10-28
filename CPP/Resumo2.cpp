1. Dynamic Memory Allocation
Dynamic memory allocation is crucial for handling memory that needs to be allocated at runtime, especially for arrays and structures of unknown size at compile time.

Dynamic Array Allocation
c
Copiar código
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int* array = (int*)malloc(n * sizeof(int));
    
    if (array == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }

    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}
2. File I/O
File input and output operations are essential for many programs, especially those that need to read from or write to external files.

Reading from a File
c
Copiar código
#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error in opening file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}
Writing to a File
c
Copiar código
#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("example.txt", "w");
    
    if (file == NULL) {
        printf("Error in opening file.\n");
        return 1;
    }

    fprintf(file, "Hello, World!\n");

    fclose(file);

    return 0;
}
3. Advanced Pointer Usage
Understanding pointers in more depth, including pointer arithmetic and arrays of pointers, can be very useful.

Pointer Arithmetic
c
Copiar código
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    for (int i = 0; i < 5; i++) {
        printf("Value of arr[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}
Array of Pointers
c
Copiar código
#include <stdio.h>

int main() {
    const char *arr[] = {"Hello", "World", "from", "C"};
    
    for (int i = 0; i < 4; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");

    return 0;
}
4. Multi-dimensional Arrays
Working with multi-dimensional arrays can be important for more complex data structures, like matrices or tables.

Multi-dimensional Array Example
c
Copiar código
#include <stdio.h>

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
5. Command Line Arguments
Handling command line arguments is useful for making programs that can accept inputs directly from the command line.

c
Copiar código
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
6. Recursive Functions
Recursion is an important concept, especially for problems that can be broken down into smaller, similar subproblems.

Recursive Factorial Function
c
Copiar código
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
7. Enumeration and Typedef
Using enum and typedef helps in creating more readable and manageable code.

Enum Example
c
Copiar código
#include <stdio.h>

enum Weekday { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    enum Weekday today = Wednesday;
    
    if (today == Wednesday) {
        printf("It's Wednesday!\n");
    }

    return 0;
}
Typedef Example
c
Copiar código
#include <stdio.h>

typedef struct {
    int x, y;
} Point;

int main() {
    Point p1;
    p1.x = 10;
    p1.y = 20;
    
    printf("Point p1: (%d, %d)\n", p1.x, p1.y);
    
    return 0;
}
