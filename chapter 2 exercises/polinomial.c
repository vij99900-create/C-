# include <stdio.h>

int main(void)

{
int x;
printf ("enter the value of x: ");
scanf("%d",&x);

printf ("the value of 3*x*x*x*x*x + 2*x*x*x*x - 5x*x*x +7*x - 6 is : %d\n", 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x +7*x - 6);
return 0; 
}