#include<stdio.h>
float celTofahr(float cel);
float fahr To Cels(float cel);

int main(){
float celsius,fahrenheit;

printf("Enter temperature in celsius:");
scanf("%f",&celsuis);

fahrenheit=cel to fahr(celsius);

printf("%.2f celsius = %.2f farenheit\n",celsuis,fahrenheit);
printf("Now enter temperature in farenheit:");
scanf("%f",&fahrenheit);

celsius= fahr to cels(fahrenheit);

printf("%.2f fahrenheit = %.2f celsius\n",fahrenheit,celsius);
return 0;

}

float cel to fahr(float cel)
{

printf("%.2f celsius Given\n",cel);
return (cel*9.0/5.0)+32.0;
}
float fahrToCels(float fah)
{
printf("Fahrenheit %.2f\n",fah);
return (fah-32.0)*5.0/9.0;
}
