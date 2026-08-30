/*computes the weight of a 12" *10" *8" box */
#include <stdio.h>

int main (void)

{
int height, length, width, volume, weight ;
height =8;
length = 12;
width = 10;
volume = height * length * width;
weight = (volume +165) / 166;
printf ("Dimentions: %d*%d*%d\n", length, width , height);
printf ("Volume (cubic inches) :%d\n" , volume);
printf("Dimentional weight (pounds) : %d\n" , weight);
return 0 ;
}