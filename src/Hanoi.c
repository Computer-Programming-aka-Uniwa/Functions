#include <stdio.h>
                                                                                       /* Function Declarations */
void Title();                                                                         // Program Title
int Read_num_Disks();                                                                 // Input the number of disks
void Print_num_Disks(int);                                                            // Print the number of disks
int Num_Min_Moves(int);                                                               // Calculate the minimum moves in the "Towers of Hanoi" game
void Print_Num_Min_Moves(int);                                                        // Print the minimum moves in the "Towers of Hanoi" game
void Move_Disks(int, char, char, char);                                               // Move the disks 
                                                                                       /* Where N is the number of disks, A is pole 1, B is pole 2, and C is pole 3 */

int main(int argc, char **argv)                                                       /* main (int argc, char **argv) */
{
    system("chcp 1253");
    
    int n;                                                                            // Variable declaration
    char pole_1, pole_2, pole_3;
    
    pole_1 = 'A';                                                                     // Pole 1
    pole_2 = 'B';                                                                     // Pole 2
    pole_3 = 'C';                                                                     // Pole 3
    
    Title();                                                                          // Call the "Title()" function
    n = Read_num_Disks();                                                             // Call the "Read_num_Disks()" function
    Print_num_Disks(n);                                                               // Call the "Print_num_Disks(N)" function
    Print_Num_Min_Moves(n);                                                           // Call the "Print_Num_Min_Moves(N)" function
    Move_Disks(n, pole_1, pole_2, pole_3);                                            // Call the "Move_Disks(N, A, B, C)" function
    
    return 0;
}

void Title()                                                                          /* Title() */
{
    printf("=============================================================\n\n");
    printf("Towers of Hanoi\n\n");                                                    // Program title
    printf("=============================================================\n\n");
}

int Read_num_Disks()                                                                  /* Read_num_Disks() */
{
    int n_RnD;                                                                        // Variable declaration
    
    printf("Enter the number of disks: ");
    scanf("%d", &n_RnD);                                                              // Input the number of disks
    printf("\n-----------------------------------------------------------\n\n");
    
    return n_RnD;                                                                     // Return the number of disks
}

void Print_num_Disks(int n_PnD)                                                       /* Print_num_Disks(N) */
{
    printf("Number of disks: [%20d]\n", n_PnD);                                       // Print the number of disks
}

int Num_Min_Moves(int n_NMM)                                                          /* Num_Min_Moves(N) */
{
    int min_moves;                                                                    // Variable declaration
    
    if (n_NMM == 0)                                                                   /* (~) 0 disks */
    {
        return 0;                                                                     // Return the minimum number of moves
    }
    else                                                                               /* (~) More than 0 disks */
    {
        min_moves = Num_Min_Moves(n_NMM - 1) + 1 + Num_Min_Moves(n_NMM - 1);          // Calculate the minimum number of moves
        
        return min_moves;                                                             // Return the minimum number of moves
    }
}

void Print_Num_Min_Moves(int n_PNMM)                                                  /* Print_Num_Min_Moves */
{
    int print_min_moves;                                                              // Variable declaration
    
    print_min_moves = Num_Min_Moves(n_PNMM);                                          // Call the "Num_Min_Moves(N)" function
    printf("Minimum moves: [%20d]\n\n", print_min_moves);                             // Print the minimum number of moves
}

void Move_Disks(int n_MD, char pole_A, char pole_B, char pole_C)                      /* Move_Disks(N, A, B, C) */
{
    if (n_MD == 1 && n_MD != 0)                                                       /* (~) 1 disk */ 
    {
        printf("%c --> %c\n", pole_A, pole_C);                                        // Move
    }
    else                                                                               /* (~) More than 1 disk */
    { 
        if (n_MD != 1 && n_MD != 0)                                                   /* (+) More than 1 disk */
        {
            n_MD = n_MD - 1;                                                          // Subtract one disk
            Move_Disks(n_MD, pole_A, pole_C, pole_B);                                 // Recursive call to "Move_Disks(N-1, A, C, B)"
            printf("%c --> %c\n", pole_A, pole_C);                                    // Move
            Move_Disks(n_MD, pole_B, pole_A, pole_C);                                 // Recursive call to "Move_Disks(N-1, B, A, C)"      
        }
    }
}
