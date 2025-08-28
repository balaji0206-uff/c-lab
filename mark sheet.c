#include<stdio.h>
#include<conio.h>
int main ()
{
    printf("\t\t\t\t\t\t\+BCA-A");
    printf("\n______________________________________________________");
    printf("\nname:ravi\t\t\t\t\t\t\treg no:001");
    printf("\n______________________________________________________");
    float mark[5]={78,81,53,64,51};
    float total=mark[0]+mark[1]+mark[2]+mark[3]+mark[4];
    float average=total/5;
    printf("ntamil\t\t\t\t\t:%5.2f",mark[0]);
    printf("nenglish\t\t\t\t\t:%5.2f",mark[1]);
    printf("nmaths\t\t\t\t\t:%5.2f",mark[2]);
    printf("nscience\t\t\t\t\t:%5.2f",mark[3]);
    printf("nsocial\t\t\t\t\t:%5.2f",mark[4]);
    printf("\n______________________________________________________");
    printf("\ntotal\t\t\t\t\t:%f\t\t\tavg:%f",total,average);
    getch();
    return 0;
