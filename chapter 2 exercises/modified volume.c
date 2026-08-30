
#include <stdio.h>

int main(void)

{
int r,v;
printf("enter the radius of the sphere: ");
scanf("%d", &r);                 //reads radius
v=4.0f/3*3.14*r*r*r;
printf ("volume of sphere of radius %d is: %d metre cubic \n",r ,v);
return 0;
}

