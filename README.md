# Simple Calculator - C Programming

![C Language](https://img.shields.io/badge/language-C-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

A straightforward console-based calculator program written in C as part of my CodeAlpha C Programming Internship. This program performs basic arithmetic operations with a clean, user-friendly interface.

## 🧮 Live Demo

[Add your video explanation link here - Remember to post on LinkedIn as per internship instructions]

## 📋 Overview

This calculator program provides a simple yet effective way to perform basic mathematical operations. It demonstrates fundamental C programming concepts including user input handling, switch-case statements, and basic arithmetic operations with proper error handling.

## ✨ Features

- **Basic Arithmetic Operations**:
  - Addition (+)
  - Subtraction (-)
  - Multiplication (*)
  - Division (/)
  
- **Input Validation**:
  - Prevents division by zero with error message
  - Validates operator selection
  
- **User-Friendly Interface**:
  - Clear prompts for user input
  - Formatted output with 2 decimal places
  - Informative error messages

## 🛠️ Technologies Used

- **C Programming Language**
  - Standard Input/Output library (stdio.h)
  - Switch-case control structure
  - Float data type for decimal calculations

## 💻 Program Flow
Start → Input First Number → Input Operation → Input Second Number
→ Perform Calculation → Display Result → End

## 📁 Project Structure
calculator-program/<br>
├── Calculator_Program.c # Main calculator source code<br>
├── README.md # Project documentation<br>


## 🚀 Installation & Usage

### Prerequisites
- C compiler (GCC, Clang, or any standard C compiler)
- Terminal/Command Prompt

### Steps to Run

1. Clone the repository
   ```bash
   git clone https://github.com/yourusername/CodeAlpha_CalculatorProgram.git
   cd CodeAlpha_CalculatorProgram
2. Compile the program
   ```bash
   gcc Calculator_Program.c -o calculator
3. Run the program
   ```bash
   ./calculator

## 🎮 Usage Example
Simple Calculator
Enter first number: 15.5
Enter operation (+, -, *, /): *
Enter second number: 4

Result: 15.50 * 4.00 = 62.00

## Error Handling Examples
Division by Zero:

Enter first number: 10
Enter operation (+, -, *, /): /
Enter second number: 0

Error: Division by zero is not allowed!

Invalid Operation:

Enter operation (+, -, *, /): ^
Enter second number: 5

Error: Invalid operation!
Please use only +, -, *, /

## 📊 Code Structure

```c
  int main() {
      char operation;      // Stores the arithmetic operator
      float num1, num2;    // Stores the two numbers
      float result;        // Stores the calculation result
      
      // User input section
      // Switch-case for operation selection
      // Error handling for division by zero and invalid operations
  }
```

## 🔍 Key Learning Concepts
Switch-Case Statements: Efficient menu-driven program structure

Input Validation: Checking for division by zero and invalid operators

Data Types: Using float for decimal arithmetic

Formatted Output: printf() with format specifiers

User Interaction: Clear prompts and error messages

## 🚀 Future Enhancements
Add more operations (power, square root, modulus)

Implement calculation history

Add support for continuous calculations (like a real calculator)

Create a menu-driven interface for repeated operations

Add scientific calculator functions

## 🤝 Contributing
This project was completed as part of my internship tasks. While it's not open for direct contributions, feel free to fork and customize it for your own learning!

## 📬 Contact
Author: Md. Minhazul Mowla

Internship: CodeAlpha C Programming Internship

Project Completion: 10 February 2026

LinkedIn Post: https://www.linkedin.com/posts/md-minhazul-mowla_codealpha-internship-remoteintern-activity-7422482525371080705-WP4u?utm_source=share&utm_medium=member_desktop&rcm=ACoAAEMykdcBnyGS_JGi_AlJEpxA2oo8BqbrhJw

## 🙏 Acknowledgments
CodeAlpha for providing this internship opportunity

C programming community for resources and documentation

<div align="center"> Built with ⚡ in C for CodeAlpha C Programming Internship </div>
