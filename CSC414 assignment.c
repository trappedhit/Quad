
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   double a, b, c,discriminant,x1,x2,;
   
   printf("Enter the value of a: ");
    scanf("%lf",&a);
    
    printf("Enter the value of b: ");
    scanf("%lf",&b);
    
    printf("Enter the value of c: ");
    scanf("%lf",&c);
   
   // discriminant
   discriminant = b*b-4*a*c;
   
   
   if (discriminant > 0)
   {
      x1 = (-b + sqrt(determinant)/(2*a));
      x2 = (-b - sqrt(determinant)/(2*a));
      printf("\nx1 = %f \nx2 = %f",x1 , x2);
      
   }
   
    //equal roots
   else if (discriminant == 0)
   {
       printf("Roots are real and equal\n");
       x1 = -b/(2.0*a);
       x1 = x2;
       printf("x1 = %f\n", x1);
       printf("x2 = %f\n", x2);
    }

    //complex root
   else
   {
      printf("\n imaginary roots"); 
    }

    return 0;
} 
