# include <stdio.h>

int main(void)

{
int amount, bills20, bills10, bills5, bills1;
printf("enter a dollar amount: ");
scanf("%d", &amount);

bills20=amount/20;
amount-= bills20*20;
bills10=amount/10;
amount-=bills10*10;
bills5=amount/5;
amount-=bills5*5;
bills1=amount;


printf("the number of $20 bills is: %d\n", bills20);
printf("the number of $10 bills is: %d\n", bills10);
printf("the number of $5 bills is: %d\n", bills5);
printf("the number of $1 bills is: %d\n", bills1);

return 0;
}