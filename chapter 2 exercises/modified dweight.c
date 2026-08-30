/*computes the weight of a 14" *12" *10" box */
#include <stdio.h>

int main (void)

{
int height, length, width, volume, weight ;
height =14;
length = 12;
width = 10;
volume = height * length * width;

printf ("Dimentions: %d*%d*%d\n", length, width , height);
printf ("Volume (cubic inches) :%d\n" , (volume+165)/166);

return 0 ;
}