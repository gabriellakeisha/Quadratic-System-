/* NT01012 Procedural Programming */
/* Programming Assignment 1       */
/*                                */
/* Question Number: 1             */
/* Name: Gabriella Keisha Andini  */
/* Date: 20 October 2022          */

#include <stdio.h> /*include is a directive*/
#include <math.h>  /*new directive include math.h for mathematical calculation*/

int main ()

{
   float a,b,c, discriminant, rootsvalue, rootsvalue2; /*variables*/
   printf ("Enter the coefficients a,b,c : ");         /*print the value of a,b,c*/
   scanf ("%f" "%f" "%f", &a,&b,&c);

   discriminant = b* (pow,2)-4*a*c;                    /*formula to find the discriminant*/

   /*determine the total of roots*/
   if (discriminant >0)
    printf ("Quadratic has 2 roots.");
   else if (discriminant == 0)
    printf ("Quadratic has 1 root.");
   else if (discriminant < 0)
    printf ("Quadratic has no roots.");
   else if (! (a>=0)|| ! (a<=0) && ! (b>=0) || ! (b<=0) && ! (c>=0) || !(c<=0))
    printf ("invalid number");

    /*print the roots values*/
    if (discriminant >0)
    {
    rootsvalue = (-b+sqrt(pow (b,2)-4*a*c))/(2*a);
    rootsvalue2 =(-b-sqrt(pow (b,2)-4*a*c))/(2*a);
    printf ("\nQuadratic has roots at x = %.2f and x = %.2f ", rootsvalue, rootsvalue2);
    }
    else if (discriminant == 0)
    printf ("\nQuadratic has roots at x = %.2f", rootsvalue);
    else if (discriminant < 0)
    printf ("\n-");
    else
    printf ("\nType valids variable.");
    return 0;










}
