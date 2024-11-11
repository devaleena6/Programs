#include<stdio.h>
int main()
{
float a[12], b[12];
printf("Table of monthly rainfall\n");
for (int i=0;i<12;i++)
{
scanf("%f %f", &a[i], &b[i]);
}
printf("\t January February March April May June July August September October November December\n");
printf("\nLast Year: ");
for (int i=0;i<12;i++)
{
printf("%0.2f ", a[i]);
}
printf("\nThis Year: ");
for (int i=0;i<12;i++)
{
printf("%0.2f ", b[i]);
}
float sum1=0, sum2=0;
for (int i=0;i<12;i++)
{
sum1+=a[i];
sum2+=b[i];
}
printf("\nTotal Rainfall This Year : %0.2f\n", sum1);
printf("Total Rainfall Last Year : %0.2f\n", sum2);
float ag1=sum1/12, ag2=sum2/12;
printf("Average monthly Rainfall for This Year: %5.2f\n", ag1);
printf("Average monthly Rainfall for Last Year: %5.2f\n", ag2);
return 0;
}