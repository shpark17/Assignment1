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
  
  double AngleOfRefraction, AngleOfIncidenceR, AngleOfRefractionD;
    
  AngleOfIncidenceR = (AngleOfIncidence/180)*M_PI;
  AngleOfRefraction = asin(sin(AngleOfIncidenceR)/(RefractionOfTheMedium));
  AngleOfRefractionD = (AngleOfRefraction*180)/(M_PI);
  
  printf("Angle of incidence: %f\n Index of Refraction: %f\n Angle of refraction: %f\n", AngleOfIncidence, RefractionOfTheMedium, AngleOfRefractionD);
return 0;
}
