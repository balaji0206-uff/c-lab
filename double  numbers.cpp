#include <stdio.h>
#include <math.h>
int main()
{
double number =9.75;
printf("original number : %if\n",number);
printf("trunc(%if)=%if\n",number,trunc(number));
printf("sqrt(%if)=%if\n",number,sqrt(number));
printf("pow(%if,2)=%if\n", number, pow(number,2));
printf("floor(%if)= %if\n", number, floor(number));
printf("ceil(%if)= %if\n", number, ceil(number));
return 0;

}
