#include <stdio.h>
int main(void)

{
float loan, rate, monthly_payment, remaining_loan,a,b,c ;

printf ("Enter the amount of loan: ");
scanf ("%f", &loan);
printf ("Enter the amount of rate: ");
scanf ("%f", &rate);
printf ("Enter the amount of monthly payment: ");
scanf ("%f", &monthly_payment);


remaining_loan = loan;
remaining_loan += remaining_loan*rate/100/12;
remaining_loan -= monthly_payment;
a= remaining_loan ;

remaining_loan += remaining_loan*rate/100/12;
remaining_loan -= monthly_payment;
b= remaining_loan ;

remaining_loan += remaining_loan*rate/100/12;
remaining_loan -= monthly_payment;
c= remaining_loan ;

printf("balance remaining after first payment is: %.2f\n", a);
printf("balance remaining after second payment is: %.2f\n", b);
printf("balance remaining after third payment is: %.2f\n", c);

return 0;
}