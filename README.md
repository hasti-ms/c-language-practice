🏠 main() [Menu Loop]
┣━━ 🟢 choice 1 ➔ circle(int r)
┣━━ 🔺 choice 2 ➔ triangle(int a)
┗━━ 🔲 choice 3 ➔ square(int a)


### Consolidated Complete Source Code

Here is the complete unified solution combining your standalone files (`sd1.PNG`, `sd2.PNG`, `circle.PNG`, `square.PNG`, `tri.PNG`) into an optimized compilation unit:

```c
#include <stdio.h>

// Function to print a hollow circle using radius 'r'
void circle(int r) {
    for (int i = -r; i <= r; i++) {
        for (int j = -r; j <= r; j++) {
            int f = (i * i) + (j * j);
            if (f < r * r + r && f > r * r - r) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\\n");
    }
}

// Function to print a hollow isosceles triangle of size 'a'
void triangle(int a) {
    for (int i = 1; i <= a; i++) {
        // Print leading spaces for alignment
        for (int sp = i; sp < a; sp++) {
            printf(" ");
        }
        // Print hollow triangle edges
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == a) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\\n");
    }
}

// Function to print a hollow square of size 'a'
void square(int a) {
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a; j++) {
            if (i == 1 || i == a || j == 1 || j == a) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        printf("\\n");
    }
}

int main() {
    int choice, a;
    while (1) {
        printf("\\n=========================\\n");
        printf("   SHAPE GENERATOR MENU   \\n");
        printf("=========================\\n");
        printf("1. Circle\\n");
        printf("2. Triangle\\n");
        printf("3. Square\\n");
        printf("0. Exit\\n");
        printf("-------------------------\\n");
        printf("Choose shape no.: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exited!!\\n");
            break;
        }

        printf("Enter size: ");
        scanf("%d", &a);

        switch (choice) {
            case 1:
                circle(a);
                break;
            case 2:
                triangle(a);
                break;
            case 3:
                square(a);
                break;
            default:
                printf("Invalid choice! Please select again.\\n");
        }
    }
    return 0;
}
💻 How to Compile and Run
Make sure you have a standard C compiler like GCC installed on your machine.

Bash
# 1. Compile the program
gcc main.c -o shape_generator

# 2. Run the application
./shape_generator
📜 MIT License
Plaintext
MIT License

Copyright (c) 2026

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
