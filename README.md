<p align="center">
  <img src="https://www.especial.gr/wp-content/uploads/2019/03/panepisthmio-dut-attikhs.png" alt="UNIWA" width="150"/>
</p>

<p align="center">
  <strong>UNIVERSITY OF WEST ATTICA</strong><br>
  SCHOOL OF ENGINEERING<br>
  DEPARTMENT OF COMPUTER ENGINEERING AND INFORMATICS
</p>

---

<p align="center">
  <strong>Computer Programming</strong>
</p>

<h1 align="center">
  Subprograms
</h1>

<p align="center">
  <strong>Vasileios Evangelos Athanasiou</strong><br>
  Student ID: 19390005
</p>

<p align="center">
  <a href="https://github.com/Ath21" target="_blank">GitHub</a> ·
  <a href="https://www.linkedin.com/in/vasilis-athanasiou-7036b53a4/" target="_blank">LinkedIn</a>
</p>

<p align="center">
  Supervisor: Georgios Meletiou, Laboratory Teaching Staff<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/georgios-meletiou/" target="_blank">UNIWA Profile</a>
</p>

<p align="center">
  Athens, December 2021
</p>

---

# Project Overview

This project focuses on the implementation and documentation of independent subprograms (functions) in C to solve mathematical and logical problems using Menu options for users to choose. It specifically covers the calculation of trigonometric values using Taylor series and the recursive solution to the Towers of Hanoi game.

---

## Table of Contents


| Section | Folder / File | Description |
|------:|---------------|-------------|
| 1 | `assign/` | Assignment material |
| 1.1 | `assign/project5.png` | Assignment description / problem statement (English) |
| 1.2 | `assign/εργασία5.png` | Assignment description / problem statement (Greek) |
| 2 | `docs/` | Theoretical documentation |
| 2.1 | `docs/Subprograms.pdf` | Functions and subprograms in C (English) |
| 2.2 | `docs/Υποπρογράμματα.pdf` | Functions and subprograms in C (Greek) |
| 3 | `src/` | Source code implementations |
| 3.1 | `src/Hanoi.c` | Tower of Hanoi example using recursive function |
| 3.2 | `src/Menu.c` | Menu-driven program demonstrating modular functions |
| 3.3 | `src/SinCosTaylor.c` | Computing sine and cosine using Taylor series via functions |
| 4 | `README.md` | Repository overview and instructions |

---


## 1. SinCosTaylor.c

This program calculates the **sine and cosine** of an angle (in degrees) provided by the user.  
It compares results from the standard **math.h** library with calculations from the **infinite Taylor series**.

### Key Features

- **Input Handling:** Reads an angle $\Omega$ in degrees and converts it to radians ($w$).  
- **Trigonometric Calculations:**  
  - **Library Functions:** `sin(w)` and `cos(w)` from `math.h`.  
  - **Taylor Series:** Implements infinite series for sine and cosine:  

    $$
    \sin(x) = x - \frac{x^3}{3!} + \frac{x^5}{5!} - \frac{x^7}{7!} + \dots
    $$  

- **Precision Check:** Compares library and Taylor results using a minimal difference threshold (e.g., $0.0000009$).

### File Structure & Libraries

- `stdio.h` – Standard I/O (`printf`, `scanf`)  
- `math.h` – Trigonometric functions and absolute value (`fabs`)  
- `#define pi 3.14159` – Constant for degree-to-radian conversion  

---

## 2. Hanoi.c

This program implements the **Towers of Hanoi** logic puzzle using recursion.

### Key Features

- **Disk Input:** Prompts the user for the number of disks.  
- **Move Calculation:** Computes the minimum moves required:  

  $$
  2^n - 1
  $$  

- **Recursive Solution:** Implements `Move_Disks` to print the step-by-step movement of disks between posts A, B, and C.

### Core Functions

| Function | Purpose |
|----------|---------|
| `Read_num_Disks()` | Reads the number of disks from the user |
| `Num_Min_Moves(int n)` | Computes the minimum move count for `n` disks |
| `Move_Disks(int n, char A, char B, char C)` | Recursively prints the movement path of disks |

---

## 3. Menu.c

The program implements a **loop** that repeatedly displays a menu until the user chooses to exit. It **tracks the total number of valid operations** performed during the session and prints this sum upon exiting.

The program is modular and uses independent subroutines for specific tasks:

### Input and UI Functions
- `Title()`: Displays the program title and headers.  
- `Read_A()` and `Read_B()`: Prompts the user to enter two integers, \(A\) and \(B\).  
- `Exit()`: Handles termination of the menu loop and returns a count for the exit operation.

### Mathematical Operations
- **Power (\(A^B\))**  
  - `Power(int, int)`: Calculates \(A^B\).  
  - `Check_Power()` and `Check_Valid_Power()`: Validate and display results.

- **Factorial (\(A!\) and \(B!\))**  
  - `Factorial(int)`: Computes factorial.  
  - `Check_Factorial_A()`, `Check_Factorial_B()`, and `Check_Factorial()`: Validate inputs (e.g., negative numbers) and display results.

- **Combinations (\(A\) per \(B\))**  
  - `Combinations(int, int)`: Calculates 
$$
\frac{A!}{B!(A-B)!}
$$
  
  - Validates that \(A > B\) and both numbers are non-negative.

### Menu Options

When running, the user is presented with:

1. Calculation of \(A^B\)  
2. Calculation of \(A!\) and \(B!\)  
3. Calculation of the number of combinations \(A\) per \(B\)  
4. Exit  

### Implementation Details

- **Libraries**: `stdio.h` for input/output, `math.h` for mathematical functions.  
- **Validation**: Ensures errors are caught (e.g., negative factorials or invalid combinations) and displays `"Error"` messages.  
- **Operation Counter**: Tracks cumulative successful executions using `sum = m_P + m_F + m_C + m_E`, printed when the user exits.

---

# Installation & Setup Guide

This repository contains **introductory laboratory material** for the  
**Computer Programming** course at the **University of West Attica (UNIWA)**.

---

## Prerequisites

### Required Software

- **C Compiler**
  - Recommended:
    - **GCC** (Linux / macOS / Windows via MinGW or WSL)

- **Text Editor or IDE**
  - Visual Studio Code `(Recommended)`
  - Code::Blocks
  - Dev-C++
  - CLion
  - Any plain text editor

### Supported Operating Systems
- Windows
- Linux `(Recommended)`
- macOS

---

## Installation

### 1. Clone the Repository

Clone the repository to your local machine:

```bash
git clone https://github.com/Computer-Programming-aka-Uniwa/Functions.git
```

#### Alternative (Without Git)

- Open the repository URL in your browser
- Click Code → Download ZIP
- Extract the ZIP file to a local directory

## Compiling & Running the Programs
### 2. Navigate to Source Directory
```bash
cd Functions/src
```

### 3. Compile the Programs
```bash
gcc Hanoi.c -o Hanoi
gcc SinCosTaylor.c -o SinCosTaylor -lm
gcc Menu.c -o Menu -lm
```
> `-lm` is required to link the math library

### 4. Run the Programs
Linux / macOS
```bash
./Hanoi
./Menu
./SinCosTaylor
```
Windows
```bash
Hanoi.exe
Menu.exe
SinCosTaylor.exe
```

---

## Open the Documentation
1. Navigate to the `docs/` directory
2. Open the report corresponding to your preferred language:
    - English: `Subprograms.pdf`
    - Greek: `Υποπρογράμματα.pdf`