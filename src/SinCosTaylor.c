#include <stdio.h>
#include <math.h>
#define pi 3.14159                                                               
                                                                                   /* Function Declarations */
void Title();                                                                      // Program title
double Read_Deg();                                                                 // Input angle in degrees
double Deg_to_Rad(double);                                                         // Convert angle from degrees to radians
void Print_Deg(double);                                                            // Print the angle in degrees
void Print_Rad(double);                                                            // Print the angle in radians
double Sin(double);                                                                // Calculate the sine of the angle using the "sin(ù)" function
double Taylor_S(double);                                                           // Calculate the sine of the angle using the Taylor series
void Print_Sin_TaylorS(double);                                                    // Print the sine of the angle using "sin(ù)" and the Taylor series
void Check_Sin_TaylorS(double);                                                    // Compare the "Sin(ù)" and "Taylor_S(ù)" functions to check if they are "almost" equal 
double Cos(double);                                                                // Calculate the cosine of the angle using the "cos(ù)" function
double Taylor_C(double);                                                           // Calculate the cosine of the angle using the Taylor series
void Print_Cos_TaylorC(double);                                                    // Print the cosine of the angle using "cos(ù)" and the Taylor series
void Check_Cos_TaylorC(double);                                                    // Compare the "Cos(ù)" and "Taylor_C(ù)" functions to check if they are "almost" equal
                                                                                   /* Where "ù" is the angle in radians and "Ù" is the angle in degrees */

int main (int argc, char **argv)                                                   /* main (int argc, char **argv) */
{
	system("chcp 1253");
	
	double deg, rad;                                                               // Variable declaration
	
	Title();                                                                       // Call the "Title()" function
	deg = Read_Deg();                                                              // Call the "Read_Deg()" function
	rad = Deg_to_Rad(deg);                                                         // Call the "Deg_to_Rad(Ù)" function
	Print_Deg(deg);                                                                // Call the "Print_Deg(Ù)" function
	Print_Rad(rad);                                                                // Call the "Print_Rad(ù)" function
	Print_Sin_TaylorS(rad);                                                        // Call the "Print_Sin_TaylorS(ù)" function
	Check_Sin_TaylorS(rad);                                                        // Call the "Check_Sin_TaylorS(ù)" function
	Print_Cos_TaylorC(rad);                                                        // Call the "Print_Cos_TaylorC(ù)" function
	Check_Cos_TaylorC(rad);                                                        // Call the "Check_Cos_TaylorC(ù)" function
	
	return 0;
}

void Title()                                                                       /* Title() */
{
	printf("========================================================\n\n");
	printf("Calculation of the sine and cosine of an angle\n\n");                 // Program title
	printf("========================================================\n\n"); 	
}

double Read_Deg()                                                                  /* Read_Deg() */
{                             
	double deg_RD;                                                                  // Variable declaration                                                      
	
	printf("Enter angle in the range of the first cycle [0,360]\n\n");             
	printf("Degrees  : ");
	scanf("%lf", &deg_RD);                                                          // Input angle in degrees
	printf("\n--------------------------------------------------------\n\n"); 
	
	return deg_RD;                                                                  // Return angle in degrees
}

double Deg_to_Rad(double deg_DtR)                                                  /* Deg_to_Rad(Ù) */
{
	double rad_dtr;                                                                 // Variable declaration
	
	rad_dtr = (pi * deg_DtR) / 180;                                                 // Convert angle from degrees to radians
	
	return rad_dtr;                                                                 // Return angle in radians
}

void Print_Deg(double deg_PD)                                                      /* Print_Deg(Ù) */
{
	printf("Degrees  : [%20.6lf]\n", deg_PD);                                       // Print angle in degrees
}

void Print_Rad(double rad_PR)                                                      /* Print_Rad(ù) */
{
	printf("Radians  : [%20.6lf]\n\n", rad_PR);	                                    // Print angle in radians
}

double Sin(double rad_S)                                                           /* Sin(ù) */       
{
	double c;                                                                       // Variable declaration

	c = sin(rad_S);                                                                 // Calculate the sine of the angle using the "sin(ù)" function

	return c;	                                                                    // Return the sine of the angle using the "sin(ù)" function
}

double Taylor_S(double rad_TaylorS)                                                /* Taylor_S(ù) */        
{
	double term, next_term, diff_terms, abs_diff_terms, first_sin_T;                // Variable declaration
	double sin_T = 0.0;                                                             // Variable initialization
	int i;
	int sign = -1;                                                                  // Variable initialization
	int j = 1;                                                                      // Variable initialization

	do                                                                              /* 1st Loop */
	{
		term = 1;                                                                   // Initialize the first term, second term ...
		for (i = 1 ; i <= j ; i++)                                                  /* 2nd Loop */
		{
			term = term * (rad_TaylorS / i);                                        // Calculate the first term, second term ... (ù^1 / 1!, ù^3 / 3! ...)
		}
		j = j + 2;                                                                  // Increment the auxiliary variable for calculating the second term, third term ...
		next_term =  term * ((rad_TaylorS * rad_TaylorS) / (j * (j - 1)));          // Calculate the second term, third term ... (ù^3 / 3!, ù^5 / 5! ...)
		diff_terms = next_term - term;                                              // Calculate the difference between the second term and the first, third term and the second ...
		abs_diff_terms = fabs(diff_terms);                                          // Calculate the absolute value of the difference
		if (j == 3)                                                                 /* (~) 1st iteration of the 1st loop */ 
		{                                                                           /* ù^1 / 1! - ù^3 / 3! */ 
			first_sin_T = term + (sign * next_term); 					            // Calculate the first sum with the appropriate sign "sign" 
			sin_T = sin_T + first_sin_T;                                            // Store the sum in the "sin_T" variable
			sign = sign * (-1);                                                     // Change sign
		}
		else                                                                        /* (~) 2nd, 3rd ... iteration of the 1st loop */
		{                                                                           /* (ù^1 / 1! - ù^3 / 3!) + ù^5 / 5! ... */
			sin_T = sin_T + (sign * next_term); 								    // Calculate the second sum, third sum ... with the appropriate sign "sign" 
			sign = sign * (-1);                                                     // Change sign
		}
	}
	while (abs_diff_terms > 0.000001);                                             
	
	return sin_T;                                                                   // Return the sum of terms (Taylor series)
}

void Print_Sin_TaylorS(double rad_PSTS)                                            /* Print_Sin_TaylorS(ù) */
{
	double rad_Sin, rad_TaylorSin;                                                  // Variable declaration
	
	rad_Sin = Sin(rad_PSTS);                                                        // Call the "Sin(ù)" function
	printf("Sine    : [%20.6lf]\n", rad_Sin);                                      // Print the sine of the angle using the "sin(ù)" function  
	rad_TaylorSin = Taylor_S(rad_PSTS);                                             // Call the "Taylor_S(ù)" function
	printf("Taylor  : [%20.6lf]\n\n", rad_TaylorSin);                              // Print the sine of the angle using the Taylor series
}

void Check_Sin_TaylorS(double rad_CSTS)                                            /* Check_Sin_TaylorS(ù) */
{
	double CheckSin, CheckTaylorS;
	double diff_CheckSinTaylorS, abs_diff_CheckSinTaylorS;                          // Variable declaration
	
	CheckSin = Sin(rad_CSTS);                                                       // Call the "Sin(ù)" function
	CheckTaylorS = Taylor_S(rad_CSTS);                                              // Call the "Taylor_S(ù)" function
	diff_CheckSinTaylorS = CheckSin - CheckTaylorS;                         	    // Calculate the difference between the "sin(ù)" function and the Taylor series
	abs_diff_CheckSinTaylorS = fabs(diff_CheckSinTaylorS);                          // Calculate the absolute value of the difference between "sin(ù)" and the Taylor series
	if (abs_diff_CheckSinTaylorS <= 0.0000009)                                      /* (~) Acceptable absolute value of the difference between "sin(ù)" and the Taylor series */
	{
		printf("Sine ~= Taylor\n");                                               
		printf("The two numbers are almost equal\n\n");                                                                
	}
	else                                                                            /* (~) Unacceptable absolute value of the difference between "sin(ù)" and the Taylor series */
	{
		printf("Sine != Taylor\n");
		printf("The two numbers are not almost equal\n\n");                                                             
	}
}

double Cos(double rad_C)                                                           /* Cos(ù) */
{
	double d;                                                                       // Variable declaration
	
	d = cos(rad_C);                                                                 // Calculate the cosine of the angle using the "cos(ù)" function
	
	return d;                                                                       // Return the cosine of the angle using the "cos(ù)" function
}

double Taylor_C(double rad_TaylorC)                                                /* Taylor_C(ù) */
{                                                           
	double term, next_term, diff_terms, abs_diff_terms, first_cos_T;                // Variable declaration 
	double cos_T = 0.0;                                                             // Variable initialization
	int i;
	int sign = -1;
	int j = 0;                                         

	do                                                                              /* 1st Loop */
	{
		term = 1;                                                                   // Initialize the first term, second term ... 
		for (i = 1 ; i <= j ; i++)                                                  /* 2nd Loop */
		{
			term = term * (rad_TaylorC / i);                                        // Calculate the first term, second term ... (1, ù^2 / 2! ...)
		}
		j = j + 2;                                                                  // Increment the auxiliary variable for calculating the second term, third term ... 
		next_term =  term * ((rad_TaylorC * rad_TaylorC) / (j * (j - 1)));          // Calculate the second term, third term ... (ù^2 / 2!, ù^4 / 4! ...)
		diff_terms = next_term - term;                                              // Calculate the difference between the second term and the first, third term and the second ...
		abs_diff_terms = fabs(diff_terms);                                          // Calculate the absolute value of the difference
		if (j == 2)                                                                 /* (~) 1st iteration of the 1st loop */ 
		{                                                                           /* 1 - ù^2 / 2! */ 
			first_cos_T = term + (sign * next_term);                                // Calculate the first sum with the appropriate sign "sign" 
			cos_T = cos_T + first_cos_T;                                            // Store the sum in the "cos_T" variable
			sign = sign * (-1);                                                     // Change sign
		}                                                                           /* (1 - ù^2 / 2!) + ù^4 / 4! ... */
		else                                                                        /* (~) 2nd, 3rd ... iteration of the 1st loop */
		{
			cos_T = cos_T + (sign * next_term);                                     // Calculate the second sum, third sum ... with the appropriate sign "sign"
			sign = sign * (-1);                                                     // Change sign
		}
	}
	while (abs_diff_terms > 0.000001);                                                   

	return cos_T;                                                                    // Return the sum of terms (Taylor series)
}

void Print_Cos_TaylorC(double rad_PCTC)                                             /* Print_Cos_TaylorC(ù) */
{
	double rad_Cos, rad_TaylorCos;                                                   // Variable declaration

	rad_Cos = Cos(rad_PCTC);                                                         // Call the "Cos(ù)" function
	printf("Cosine  : [%20.6lf]\n", rad_Cos);                                        // Print the cosine of the angle using the "cos(ù)" function     
	rad_TaylorCos = Taylor_C(rad_PCTC);                                              // Call the "Taylor_C(ù)" function
	printf("Taylor  : [%20.6lf]\n\n", rad_TaylorCos);                                // Print the cosine of the angle using the Taylor series 
}
 
void Check_Cos_TaylorC(double rad_CCTC)                                             /* Check_Cos_TaylorC(ù) */
{
	double CheckCos, CheckTaylorC;
	double diff_CheckCosTaylorC, abs_diff_CheckCosTaylorC;                           // Variable declaration
	
	CheckCos = Cos(rad_CCTC);                                                        // Call the "Cos(ù)" function
	CheckTaylorC = Taylor_C(rad_CCTC);                                               // Call the "Taylor_C(ù)" function
	diff_CheckCosTaylorC = CheckCos - CheckTaylorC;                                  // Calculate the difference between the "cos(ù)" function and the Taylor series
    abs_diff_CheckCosTaylorC = fabs(diff_CheckCosTaylorC);                           // Calculate the absolute value of the difference between "cos(ù)" and the Taylor series
	if (abs_diff_CheckCosTaylorC <= 0.0000009)                                       /* (~) Acceptable absolute value of the difference between "cos(ù)" and the Taylor series */
	{
		printf("Cosine ~= Taylor\n");
		printf("The two numbers are almost equal\n\n");                                           
	}
	else                                                                             /* (~) Unacceptable absolute value of the difference between "cos(ù)" and the Taylor series */
	{ 
		printf("Cosine != Taylor\n");
		printf("The two numbers are not almost equal\n\n");                                                              
	}
}
