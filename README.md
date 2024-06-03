# Basic Calculator Program

This is a simple command-line calculator program written in C++. The program allows users to perform basic arithmetic operations such as addition, subtraction, multiplication, and division on two integers.

## Features

- Addition of two integers
- Subtraction of two integers
- Multiplication of two integers
- Division of two integers (with a check to prevent division by zero)

## Getting Started

### Prerequisites

To compile and run this program, you need to have a C++ compiler installed on your system. Some popular options include:

- GCC (GNU Compiler Collection)
- Clang

### Compiling the Program

To compile the program, open your terminal or command prompt and run the following command:

```sh
g++ -o calculator calculator.cpp
Usage
Upon running the program, you will be prompted to enter your choice of operation and two integers. The program will then perform the selected operation and display the result.

Example:

Copy code
Please Enter Your Choice:
1. Addition
2. Subtraction
3. Multiplication
4. Division
1
Enter 2 Integers:
5 3
You chose Addition
The Sum is: 8

Source Code:

#include <iostream>
using namespace std;

void add(int num1, int num2);
void sub(int num1, int num2);
void mul(int num1, int num2);
void divi(int num1, int num2);

int main() {
    int choice, num1, num2;
    cout << "Please Enter Your Choice:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cin >> choice;

    cout << "Enter 2 Integers:\n";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            cout << "You chose Addition \n";
            add(num1, num2);
            break;
        case 2:
            cout << "You chose Subtraction \n";
            sub(num1, num2);
            break;
        case 3:
            cout << "You chose Multiplication \n";
            mul(num1, num2);
            break;
        case 4:
            cout << "You chose Division \n";
            divi(num1, num2);
            break;
        default:
            cout << "Incorrect choice!\n";
            break;
    }

    return 0;
}

void add(int num1, int num2) {
    cout << "The Sum is: " << num1 + num2 << endl;
}

void sub(int num1, int num2) {
    cout << "The Difference is: " << num1 - num2 << endl;
}

void mul(int num1, int num2) {
    cout << "The Product is: " << num1 * num2 << endl;
}

void divi(int num1, int num2) {
    if (num2 != 0) {
        cout << "The Quotient is: " << num1 / num2 << endl;
    } else {
        cout << "Error: Division by zero is not allowed.\n";
    }
}
icense
This project is licensed under the MIT License - see the LICENSE file for details.

This `README.md` provides an overview of your program, including how to compile and run it, along with a sample usage example. It also includes the source code for reference. Be sure to adjust any paths or instructions to match your specific.
