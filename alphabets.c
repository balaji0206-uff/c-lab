#include<stdio.h>
#include<ctype.h>

int main(){
char sentence[1000];
int alphabets=0,digits=0,specialChars=0;
int i=0;
printf("enter a sentence");
fgets(sentence,sizeof(sentence),stdin);// Read a line of text
while (sentence[i]!='\0'){
if(isalpha(sentence[i])){
alphabets++;
}else if (isdigit(sentence[i])){
/Not a space, not an alphabet or digit=special character
special chars++;
}
i++;
}
perintf("\n Alphabets:%d",alphabets);
printf("\n Digits:%d",digits);
printf("\n Special characters:%d\n",special chars);
return 0;
}
