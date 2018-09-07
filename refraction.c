/**Author: SungHa Park
 *
 *This program computes angle of refraction
 */
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
  
  double AngleOfIncidence, RefractionOfTheMedium;
  
  printf("Enter the value of Angle of Incidence: ");
  scanf("%lf", &AngleOfIncidence);
  
  printf("Enter the Value of index of refraction of the medium: ");
  scanf("%lf", &RefractionOfTheMedium);
  
  double AngleOfRefraction;
  
  AngleOfRefraction = asin(RefractionOfTheMedium*sin(AngleOfIncidence));
    
  printf("Angle of incidence: %f, %f\n Index of Refraction: %f, %f\n Angle of refraction: %f,\n", AngleOfIncidence, RefractionOfTheMedium, AngleOfRefraction);
return 0;
}
