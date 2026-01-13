#include <stdio.h>
#include <math.h>
                                                                         /* Function Declarations */
void Title();                                                            // Program Title
int Read_A();                                                            // Input of the first integer "A"
int Read_B();                                                            // Input of the second integer "B"
float Power(int, int);                                                   // Calculation of the power "A^B" (Function [1])
void Check_Power(int, int);                                              // Validation of Function [1] and display of results
int Check_Valid_Power(int, int);                                         // Validation counter for Function [1]
int Factorial(int);                                                      // Calculation of factorial "A!" and "B!" (Function [2])
void Check_Factorial_A(int);                                             // Validation of Function [2] "A!" sub-function
void Check_Factorial_B(int);                                             // Validation of Function [2] "B!" sub-function
void Check_Factorial(int, int);                                          // Validation of Function [2] and display of results
int Check_Valid_Factorial(int, int);                                     // Validation counter for Function [2]
int Combinations(int, int);                                              // Calculation of combinations "A choose B" (Function [3])
void Check_Combinations(int, int);                                       // Validation of Function [3] and display of results
int Check_Valid_Combinations(int, int);                                  // Validation counter for Function [3]
int Exit();                                                              // Validation of Function [4] (Exit)
void Menu(int, int);                                                     // Menu for selecting operations
                                                                         /* Where "A" is the first integer and "B" is the second integer */

int main(int argc, char **argv)                                           /* main (int argc, char **argv) */
{
    system("chcp 1253");
    
    int a, b;                                                            // Variable declaration
    
    Title();                                                             // Call the "Title()" function
    a = Read_A();                                                        // Call the "Read_A()" function
    b = Read_B();                                                        // Call the "Read_B()" function
    Menu(a, b);                                                          // Call the "Menu(A, B)" function
    
    return 0;
}                                                              

void Title()                                                             /* Title() */
{
    printf("===============================================\n\n"); 
    printf("Menu for Arithmetic Operations with Integers\n\n");          // Program title
    printf("===============================================\n\n"); 
}
 
int Read_A()                                                             /* Read_A (A) */
{ 
    int a_RA;                                                            // Variable declaration
    
    printf("Enter integer A: ");               
    scanf("%d", &a_RA);                                                  // Input of integer "A"
    
    return a_RA;                                                         // Return integer "A"
}

int Read_B()                                                             /* Read_B (B) */
{
    int b_RB;                                                            // Variable declaration
    
    printf("Enter integer B: ");               
    scanf("%d", &b_RB);                                                  // Input of integer "B"
    
    return b_RB;                                                         // Return integer "B"
}

float Power(int a_P, int b_P)                                             /* Power (A, B) */
{
    float power;                                                         // Variable declaration
    float error_P = -1.0;                                                // Variable initialization
    
    if (a_P == 0.0 && b_P == 0.0)                                        /* (~) A == 0 AND B == 0 */
    { 
        return error_P;                                                  // Return error value
    }
    else                                                                 /* (~) A != 0 or B != 0 */
    {
        power = pow(a_P, b_P);                                           // Calculate "A^B"
        
        return power;                                                    // Return the result of "A^B"
    }
}

void Check_Power(int a_CP, int b_CP)                                      /* Check_Power (A, B) */
{
    system("cls");
    
    float cp;                                                            // Variable declaration
    
    printf("[1] Calculation of A^B\n\n");                                       
    cp = Power(a_CP, b_CP);                                              // Call the "Power(A, B)" function
    if (cp != -1.0)                                                      /* (~) Valid result */
    {
        printf("A^B: %f\n\n", cp);                                       // Display result of Function [1] (A^B)
        printf("----------------------------------------------\n\n");		                       
    }
    else                                                                 /* (~) Error result */
    {
        printf("Error\n\n");
        printf("----------------------------------------------\n\n");
    }
}

int Check_Valid_Power(int a_CVP, int b_CVP)                               /* Check_Valid_Power (A, B) */
{
    float cvp;                                                           // Variable declaration
    
    cvp = Power(a_CVP, b_CVP);                                           // Call the "Power(A, B)" function
    if (cvp != -1.0)                                                     /* (~) Valid result */
    {
        return 1;                                                        // Return valid function status
    }
    else                                                                 /* (~) Error result */
    {
        return 0;	                                                     // Return invalid function status
    }
}	 

int Factorial(int a_b_F)                                                  /* Factorial (A_B) */
{
    int i;                                                               // Variable declaration 
    int p = 1;                                                           // Variable initialization
    int error_F = -1;
    
    if (a_b_F >= 0)                                                      /* (~) A_B >= 0 */
    {
        for (i = 1; i <= a_b_F; i++)                                     /* Loop */
        {
            p = p * i;                                                   // Calculate factorial "A!" or "B!"
        }
        
        return p;                                                        // Return factorial value "A!" or "B!"
    }
    else                                                                 /* (~) A_B < 0 */
    {
        return error_F;                                                  // Return error value
    }
}

void Check_Factorial_A(int a_CFA)                                         /* Check_Factorial_A (A) */
{
    int cf_a; 
    
    cf_a = Factorial(a_CFA);                                              // Call the "Factorial(A)" function
    if (cf_a != -1)                                                      /* (~) Valid result */
    {
        printf("A! : [%20d]\n", cf_a);	                                 // Display result of sub-function [2] "A!"
    }
    else                                                                 /* (~) Error result */
    {
        printf("Error\n");
    }
}

void Check_Factorial_B(int b_CFB)                                         /* Check_Factorial_B (B) */
{
    int cf_b;                                                            // Variable declaration
   
    cf_b = Factorial(b_CFB);                                              // Call the "Factorial(B)" function
    if (cf_b != -1)                                                      /* (~) Valid result */
    {
        printf("B! : [%20d]\n\n", cf_b);                                 // Display result of sub-function [2] "B!"
        printf("----------------------------------------------\n\n");	                     
    }
    else                                                                 /* (~) Error result */
    {
        printf("Error\n\n");
        printf("----------------------------------------------\n\n");
    }
}

void Check_Factorial(int a_CF, int b_CF)                                  /* Check_Factorial (A, B) */
{
    system("cls");
    
    printf("[2] Calculation of A! and B!\n\n"); 
    Check_Factorial_A(a_CF);                                              // Call the "Check_Factorial_A(A)" function
    Check_Factorial_B(b_CF);                                              // Call the "Check_Factorial_B(B)" function
}

int Check_Valid_Factorial(int a_CVF, int b_CVF)                           /* Check_Valid_Factorial (A, B) */
{
    int cvf_a, cvf_b;                                                     // Variable declaration
    
    cvf_a = Factorial(a_CVF);                                             // Call the "Factorial(A)" function
    cvf_b = Factorial(b_CVF);                                             // Call the "Factorial(A)" function
    if (cvf_a != -1 && cvf_b != -1)                                       /* (~) Valid result */
    {
        return 1;                                                         // Return valid function status
    }
    else                                                                  /* (~) Error result */
    {                                      
        return 0;                                                         // Return invalid function status
    }                                             
}

int Combinations(int a_C, int b_C)                                        /* Combinations (A, B) */
{
    int combos, i, j, k;                                                  // Variable declaration 
    int error_C = -1;                                                     // Variable initialization
    
    if (a_C > b_C && a_C >= 0 && b_C >= 0)                                /* (~) A > B AND A >= 0 AND B >= 0 */
    {
        i = Factorial(a_C);                                               // Call the "Factorial(A)" function
        j = Factorial(b_C);                                               // Call the "Factorial(B)" function
        k = Factorial(a_C - b_C);                                         // Call the "Factorial(A - B)" function
        combos =  i / (j * k);                                            // Calculate "A choose B"
        
        return combos;	                                                   // Return "A choose B"
    }
    else                                                                  /* (~) A <= B OR A < 0 OR B < 0 */
    {
        return error_C;                                                   // Return error value
    }
}

void Check_Combinations(int a_CC, int b_CC)                               /* Check_Combinations (A, B) */
{
    system("cls");
	    
    int cc;                                                               // Variable declaration
  
    printf("[3] Calculation of A choose B\n\n");                                             
    cc = Combinations(a_CC, b_CC);                                        // Call the "Combinations(A, B)" function
    if (cc != -1)                                                         /* (~) Valid result */
    {
        printf("A choose B: %d\n\n", cc);                                 // Display result of Function [3] (A! / (B! * (A - B)!))
        printf("----------------------------------------------\n\n");	                      
    }
    else                                                                  /* (~) Error result */
    {
        printf("Error\n\n");
        printf("----------------------------------------------\n\n");
    }
}

int Check_Valid_Combinations(int a_CVC, int b_CVC)                        /* Check_Valid_Combinations (A, B) */
{
    int cvc;                                                              // Variable declaration
    
    cvc = Combinations(a_CVC, b_CVC);                                     // Call the "Combinations(A, B)" function
    if (cvc != -1)                                                        /* (~) Valid result */
    {
        return 1;                                                         // Return valid function status
    }
    else                                                                  /* (~) Error result */
    {
        return 0;                                                         // Return invalid function status
    }
}

int Exit()                                                                /* Exit() */
{
    int cnt = 1;                                                          // Variable initialization

    return cnt;                                                           // Return valid function status [4] 
}

void Menu(int a_M, int b_M)                                                /* Menu (A, B) */
{ 
    system("cls");
    
    int ch, sum;                                                          // Variable declaration
    int m_P = 0;                                                          // Variable initialization
    int m_F = 0;                                                          // Variable initialization
    int m_C = 0;                                                          // Variable initialization
    int m_E = 0;                                                          // Variable initialization
    
    do                                                                    /* Loop */
    {
        printf("[1] Calculate A^B\n");                                    // Menu with operation options
        printf("[2] Calculate A! and B!\n"); 
        printf("[3] Calculate A choose B\n"); 
        printf("[4] Exit\n");
        printf("\nChoose an operation: ");                   
        scanf("%d", &ch);                                                 // Input operation choice
        if (ch >= 1 && ch <= 4)                                           /* (~) Valid operation choice */
        {
            switch (ch)                                                   /* Operation choices */
            {
                case 1: Check_Power(a_M, b_M);                            // [1] Call the "Check_Power(A, B)" function
                m_P = m_P + Check_Valid_Power(a_M, b_M); break;           // Count valid operation [1]      
                case 2: Check_Factorial(a_M, b_M);                        // [2] Call the "Check_Factorial(A, B)" function
                m_F = m_F + Check_Valid_Factorial(a_M, b_M); break;       // Count valid operation [2] 
                case 3: Check_Combinations(a_M, b_M);                     // [3] Call the "Combinations(A, B)" function   
                m_C = m_C + Check_Valid_Combinations(a_M, b_M); break;    // Count valid operation [3]                                                                 
            }
        }
        else
        { 
            system("cls");                                                /* (~) Invalid operation choice */
        } 
    }
    while (ch != 4);                                             

    system("cls");                                            

    m_E = Exit();                                                         // [4] Call the "Exit()" function 
    sum = m_P + m_F + m_C + m_E;                                          // Calculate total valid operations
    printf("\nNumber of valid operations: %d\n", sum);                    // Display total valid operations
}
