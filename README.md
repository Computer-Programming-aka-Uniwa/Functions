<p align="center">
  <img src="https://www.especial.gr/wp-content/uploads/2019/03/panepisthmio-dut-attikhs.png" alt="UNIWA" width="150"/>
</p>

<p align="center">
  <strong>UNIVERSITY OF WEST ATTICA</strong><br>
  SCHOOL OF ENGINEERING<br>
  DEPARTMENT OF COMPUTER ENGINEERING AND INFORMATICS
</p>

<p align="center">
  <a href="https://www.uniwa.gr" target="_blank">University of West Attica</a> ·
  <a href="https://ice.uniwa.gr" target="_blank">Department of Computer Engineering and Informatics</a>
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

<hr/>

<p align="center">
  <strong>Supervision</strong>
</p>

<p align="center">
  Supervisor: Nikolaos Vassilas, Professor<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/nikolaos-vassilas/" target="_blank">UNIWA Profile</a>
</p>

<p align="center">
  Co-supervisor: Georgios Meletiou, Laboratory Teaching Staff<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/georgios-meletiou/" target="_blank">UNIWA Profile</a>
</p>

</hr>

---

<p align="center">
  Athens, December 2021
</p>

---

<p align="center">
  <img src="https://files.codingninjas.in/article_images/types-of-functions-in-c-0-1712028821.webp" width="250"/>
</p>

---

# README

## Subprograms

This project focuses on the implementation and documentation of independent subprograms (functions) in C to solve mathematical and logical problems using Menu options for users to choose. It specifically covers the calculation of trigonometric values using Taylor series and the recursive solution to the Towers of Hanoi game.

---

## Table of Contents

| Section | Folder / File             | Description                                                 |
| ------: | ------------------------- | ----------------------------------------------------------- |
|       1 | `assign/`                 | Assignment material                                         |
|     1.1 | `assign/project5.png`     | Assignment description / problem statement (English)        |
|     1.2 | `assign/εργασία5.png`     | Assignment description / problem statement (Greek)          |
|       2 | `docs/`                   | Theoretical documentation                                   |
|     2.1 | `docs/Subprograms.pdf`    | Functions and subprograms in C (English)                    |
|     2.2 | `docs/Υποπρογράμματα.pdf` | Functions and subprograms in C (Greek)                      |
|       3 | `src/`                    | Source code implementations                                 |
|     3.1 | `src/Hanoi.c`             | Tower of Hanoi example using recursive function             |
|     3.2 | `src/Menu.c`              | Menu-driven program demonstrating modular functions         |
|     3.3 | `src/SinCosTaylor.c`      | Computing sine and cosine using Taylor series via functions |
|       4 | `README.md`               | Project documentation                                       |
|       5 | `INSTALL.md`              | Usage instructions                                          |

---

## 1. SinCosTaylor.c

This program calculates the **sine and cosine** of an angle (in degrees) provided by the user.  
It compares results from the standard **math.h** library with calculations from the **infinite Taylor series**.

### 1.1 Key Features

- **Input Handling:** Reads an angle $\Omega$ in degrees and converts it to radians ($w$).
- **Trigonometric Calculations:**
  - **Library Functions:** `sin(w)` and `cos(w)` from `math.h`.
  - **Taylor Series:** Implements infinite series for sine and cosine:

    $$
    \sin(x) = x - \frac{x^3}{3!} + \frac{x^5}{5!} - \frac{x^7}{7!} + \dots
    $$

- **Precision Check:** Compares library and Taylor results using a minimal difference threshold (e.g., $0.0000009$).

### 1.2 File Structure & Libraries

- `stdio.h` – Standard I/O (`printf`, `scanf`)
- `math.h` – Trigonometric functions and absolute value (`fabs`)
- `#define pi 3.14159` – Constant for degree-to-radian conversion

---

## 2. Hanoi.c

This program implements the **Towers of Hanoi** logic puzzle using recursion.

### 2.1 Key Features

- **Disk Input:** Prompts the user for the number of disks.
- **Move Calculation:** Computes the minimum moves required:

  $$
  2^n - 1
  $$

- **Recursive Solution:** Implements `Move_Disks` to print the step-by-step movement of disks between posts A, B, and C.

### 2.2 Core Functions

| Function                                    | Purpose                                       |
| ------------------------------------------- | --------------------------------------------- |
| `Read_num_Disks()`                          | Reads the number of disks from the user       |
| `Num_Min_Moves(int n)`                      | Computes the minimum move count for `n` disks |
| `Move_Disks(int n, char A, char B, char C)` | Recursively prints the movement path of disks |

---

## 3. Menu.c

The program implements a **loop** that repeatedly displays a menu until the user chooses to exit. It **tracks the total number of valid operations** performed during the session and prints this sum upon exiting.

The program is modular and uses independent subroutines for specific tasks:

### 3.1 Input and UI Functions

- `Title()`: Displays the program title and headers.
- `Read_A()` and `Read_B()`: Prompts the user to enter two integers, \(A\) and \(B\).
- `Exit()`: Handles termination of the menu loop and returns a count for the exit operation.

### 3.2 Mathematical Operations

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

### 3.3 Menu Options

When running, the user is presented with:

1. Calculation of \(A^B\)
2. Calculation of \(A!\) and \(B!\)
3. Calculation of the number of combinations \(A\) per \(B\)
4. Exit

### 3.4 Implementation Details

- **Libraries**: `stdio.h` for input/output, `math.h` for mathematical functions.
- **Validation**: Ensures errors are caught (e.g., negative factorials or invalid combinations) and displays `"Error"` messages.
- **Operation Counter**: Tracks cumulative successful executions using `sum = m_P + m_F + m_C + m_E`, printed when the user exits.
