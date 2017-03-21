#include <stdio.h>

int main()
{
double owed, paid;
int r, dollars, quarters, dimes, nickels, cents, remainder, owed1, paid1, bill50, bill20, bill10, bill5, bill1;
printf("how much did the customer have to pay ?\n");
scanf("%lf",&owed); 
printf("how much did the customer pay ?\n");
scanf("%lf",&paid); 
paid1 = paid * 100;
owed1 = owed * 100;
int change = paid1 - owed1;
dollars =  change / 100;
float dollar = change / 100.00;
r = dollars % 100;
bill50 = r / 50;
r = r % 50;
bill20 = r / 20;
r = r % 20;
bill10 = r / 10;
r = r % 10;
bill5 = r / 5;
r = r % 5;
bill1 = r; 
remainder = change % 100;
quarters = remainder / 25;
remainder = remainder % 25;
dimes = remainder / 10;
remainder = remainder % 10;
nickels = remainder / 5;
remainder = remainder % 5;
cents = remainder;
printf("Total Amount: %.2f\n",dollar);
printf("$50 Bills: %d, $20 Bills: %d, $10 Bills: %d, $5 Bills: %d, $1 Bills: %d, Quarters:%d, Dimes:%d, Nickels:%d, Cents:%d\n", bill50, bill20, bill10, bill5, bill1, quarters , dimes , nickels , cents );
return 0;
}
