![Flag](https://upload.wikimedia.org/wikipedia/commons/thumb/a/a5/Flag_of_the_United_Kingdom_%281-2%29.svg/255px-Flag_of_the_United_Kingdom_%281-2%29.svg.png)

# Functions in C Programming

For the requested Assignment, click the link:
[Assignment](Assignment/)

For the Source Code, click the link:
[Code](Code/)

For the detailed Documentation, click the link:
[Documentation](Documentation/)

# Overview

This repository contains several C programs that demonstrate the use of functions in C. Functions in C allow developers to break their code into reusable blocks, improving modularity, readability, and ease of maintenance. Each program in this repository focuses on different mathematical or logical problems solved using functions.

## Course Information
- **Course**: Computer Programming
- **Semester**: 1
- **Program**: [UNIWA](https://www.uniwa.gr/)
- **Department**: [Information and Computer Engineering](https://ice.uniwa.gr/)
- **Instructor**: [Georgios Meletiou](https://ice.uniwa.gr/emd_person/17562/)

## Student Information
- **Name**: Athanasiou Vasileios Evangelos
- **Student ID**: ice19390005
- **Status**: Undergraduate

## Programs in this Repository

### 1. **Basic Arithmetic Operations and Factorial with Functions**

#### `Menu.c`

This program demonstrates basic arithmetic operations, power calculation, factorial calculation, and combinations using functions.

- **Key Functions:**
  - `Power(int, int)`: Calculates the power `A^B`.
  - `Factorial(int)`: Calculates the factorial of a number.
  - `Combinations(int, int)`: Calculates the number of combinations `A choose B`.
  - `Check_Power(int, int)`, `Check_Factorial(int)`, `Check_Combinations(int, int)`: Validate and display results of operations.
  - **Modular Approach**: Each operation is encapsulated in its own function, demonstrating how to break down complex tasks into smaller, reusable functions.

### 2. **Towers of Hanoi Puzzle**

#### `Hanoi.c`

This program demonstrates the recursive solution for the Towers of Hanoi problem, which involves moving disks between poles following specific rules.

- **Key Functions:**
  - `Move_Disks(int, char, char, char)`: A recursive function that calculates the steps to move the disks from one pole to another.
  - `Num_Min_Moves(int)`: Recursively calculates the minimum number of moves needed for the puzzle.
  - **Recursion**: The program highlights how recursion is used in C to solve problems that can be divided into smaller, similar sub-problems.

### 3. **Sine and Cosine Calculation using Taylor Series**

#### `SinCosTaylor.c`

This program calculates the sine and cosine of an angle (in radians) using the Taylor series expansion. The program uses multiple helper functions to calculate and validate the results.

- **Key Functions:**
  - `Sin(double)`: Calculates the sine of an angle using the built-in `sin()` function.
  - `Taylor_S(double)`: Calculates sine using the Taylor series expansion.
  - `Cos(double)`: Calculates the cosine using the built-in `cos()` function.
  - `Taylor_C(double)`: Calculates cosine using the Taylor series expansion.
  - **Mathematical Functions**: The program uses mathematical functions, recursion, and floating-point arithmetic to compute values with high accuracy.

## Installation and Usage

### 1. Clone the Repository
```bash
git clone https://github.com/Computer-Programming-aka-Uniwa/Functions.git
cd Functions
```

### 2. Compile
```bash
gcc -o Hanoi Hanoi.c
gcc -o Menu Menu.c
gcc -o SinCosTaylor SinCosTaylor.c
```

### 3. Run
```bash
./Hanoi
./Menu
./SinCosTaylor
```


![Flag](https://upload.wikimedia.org/wikipedia/commons/thumb/5/5c/Flag_of_Greece.svg/255px-Flag_of_Greece.svg.png)

# Συναρτήσεις στη Γλώσσα Προγραμματισμού C

Για την ζητούμενη Εργασία, κάντε κλικ στον σύνδεσμο:
[Assignment](Assignment/)

Για τον Πηγαίο Κώδικα, κάντε κλικ στον σύνδεσμο:
[Code](Code/)

Για την αναλυτική Τεκμηρίωση, κάντε κλικ στον σύνδεσμο:
[Documentation](Documentation/)

# Επισκόπηση

Αυτό το αποθετήριο περιέχει αρκετά προγράμματα σε C που επιδεικνύουν τη χρήση συναρτήσεων. Οι συναρτήσεις στη C επιτρέπουν στους προγραμματιστές να χωρίσουν τον κώδικα τους σε επαναχρησιμοποιήσιμα μπλοκ, βελτιώνοντας την αρθρωτότητα, την αναγνωσιμότητα και την ευκολία συντήρησης. Κάθε πρόγραμμα σε αυτό το αποθετήριο επικεντρώνεται σε διαφορετικά μαθηματικά ή λογικά προβλήματα που λύνονται με τη χρήση συναρτήσεων.

## Πληροφορίες Μαθήματος
- **Μάθημα**: Προγραμματισμός Υπολογιστών
- **Εξάμηνο**: 1
- **Πρόγραμμα Σπουδών**: [ΠΑΔΑ](https://www.uniwa.gr/)
- **Τμήμα**: [Μηχανικών Πληροφορικής και Υπολογιστών](https://ice.uniwa.gr/)
- **Διδάσκων**: [Γεώργιος Μελετίου](https://ice.uniwa.gr/emd_person/17562/)

## Πληροφορίες Φοιτητή
- **Όνομα**: Αθανασίου Βασίλειος Ευάγγελος
- **Αριθμός Μητρώου**: ice19390005
- **Κατάσταση**: Προπτυχιακός

## Προγράμματα σε αυτό το Αποθετήριο

### 1. **Βασικές Αριθμητικές Πράξεις και Παραγοντικό με Συναρτήσεις**

#### `Menu.c`

Αυτό το πρόγραμμα επιδεικνύει βασικές αριθμητικές πράξεις, υπολογισμό δύναμης, παραγοντικό και συνδυασμούς χρησιμοποιώντας συναρτήσεις.

- **Βασικές Συναρτήσεις:**
  - `Power(int, int)`: Υπολογίζει τη δύναμη `A^B`.
  - `Factorial(int)`: Υπολογίζει το παραγοντικό ενός αριθμού.
  - `Combinations(int, int)`: Υπολογίζει το πλήθος των συνδυασμών `A επιλέγουμε B`.
  - `Check_Power(int, int)`, `Check_Factorial(int)`, `Check_Combinations(int, int)`: Επικυρώνουν και εμφανίζουν τα αποτελέσματα των πράξεων.
  - **Αρθρωτή Προσέγγιση**: Κάθε λειτουργία είναι ενσωματωμένη στη δική της συνάρτηση, δείχνοντας πώς να διαχωρίζονται πολύπλοκες εργασίες σε μικρότερες, επαναχρησιμοποιήσιμες συναρτήσεις.

### 2. **Το Παζλ των Πύργων του Ανόι**

#### `Hanoi.c`

Αυτό το πρόγραμμα επιδεικνύει τη λύση του προβλήματος των Πύργων του Ανόι χρησιμοποιώντας αναδρομή, όπου οι δίσκοι μετακινούνται μεταξύ των στυλών ακολουθώντας συγκεκριμένους κανόνες.

- **Βασικές Συναρτήσεις:**
  - `Move_Disks(int, char, char, char)`: Αναδρομική συνάρτηση που υπολογίζει τα βήματα για να μετακινήσει τους δίσκους από έναν στύλο σε άλλον.
  - `Num_Min_Moves(int)`: Υπολογίζει αναδρομικά τον ελάχιστο αριθμό κινήσεων που απαιτείται για το παζλ.
  - **Αναδρομή**: Το πρόγραμμα τονίζει πώς η αναδρομή χρησιμοποιείται στη C για την επίλυση προβλημάτων που μπορούν να διαιρεθούν σε μικρότερα, παρόμοια υποπροβλήματα.

### 3. **Υπολογισμός Ημίτονου και Συνημίτονου με Χρήση Σειράς Taylor**

#### `SinCosTaylor.c`

Αυτό το πρόγραμμα υπολογίζει το ημίτονο και το συνημίτονο μιας γωνίας (σε ακτίνια) χρησιμοποιώντας την επέκταση της σειράς Taylor. Το πρόγραμμα χρησιμοποιεί πολλές βοηθητικές συναρτήσεις για να υπολογίσει και να επικυρώσει τα αποτελέσματα.

- **Βασικές Συναρτήσεις:**
  - `Sin(double)`: Υπολογίζει το ημίτονο μιας γωνίας χρησιμοποιώντας την έτοιμη συνάρτηση `sin()`.
  - `Taylor_S(double)`: Υπολογίζει το ημίτονο χρησιμοποιώντας τη σειρά Taylor.
  - `Cos(double)`: Υπολογίζει το συνημίτονο χρησιμοποιώντας την έτοιμη συνάρτηση `cos()`.
  - `Taylor_C(double)`: Υπολογίζει το συνημίτονο χρησιμοποιώντας τη σειρά Taylor.
  - **Μαθηματικές Συναρτήσεις**: Το πρόγραμμα χρησιμοποιεί μαθηματικές συναρτήσεις, αναδρομή και αριθμητικές πράξεις κινητής υποδιαστολής για να υπολογίσει τιμές με υψηλή ακρίβεια.

## Εγκατάσταση και Χρήση

### 1. Κλωνοποίηση του Αποθετηρίου
```bash
git clone https://github.com/Computer-Programming-aka-Uniwa/Functions.git
cd Functions
```

### 2. Μεταγλώττιση
```bash
gcc -o Hanoi Hanoi.c
gcc -o Menu Menu.c
gcc -o SinCosTaylor SinCosTaylor.c
```

### 3. Εκτέλεση
```bash
./Hanoi
./Menu
./Sin
```