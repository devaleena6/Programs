#include <stdio.h>

int main()
{
float i;
printf("Enter richter scale reading: \n");
scanf("%f", &i);
if(i < 5.0)
printf("Little or no damage");
if(i>= 5.0 && i< 5.5)
printf("some damage");
if(i >= 5.5 && i< 6.5)
printf("serious damage,walls may crack");
else
printf("catastrophe,most buildings destroyed");
return 0;
}

