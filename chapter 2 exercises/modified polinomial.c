# include <stdio.h>
int main(void)

{
int x;
printf ("enter the value of x: ");
scanf("%d", &x);

printf("the value of ((((3*x+2)*x-5)*x-1)*x+7)*x-6 is : %d\n ", ((((3*x+2)*x-5)*x-1)*x+7)*x-6);

return 0;
}