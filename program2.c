#include <stdio.h>
int main()
{
int v[5][4] = {192, 48, 206, 37, 147, 90, 312, 21, 186, 12, 121, 38, 114, 21, 408, 39, 267, 13, 382, 29};
char c[4] = {'A', 'B', 'C', 'D'};
int tv=0;
int tr[5];
int tc[4];
float p[4];
int row, column;
for (row = 0; row <= 4; row++)
{
tr[row] = 0;
for (column = 0; column <= 3; column++)
{
tr[row] += v[row][column];
tv+= v[row][column];
}
}
for (column = 0; column <= 3; column++)
{
tc[column] = 0;
for (row = 0; row <= 4; row++)
{
tc[column] += v[row][column];
}
}
for (column = 0; column < 4; column++)
{
p[column] = ((tc[column]) / (float)(tv)) * 100;
}
printf(" Candidate Candidate Candidate Candidate \n");
printf("Precinct A B C D \n");
for (row = 0; row <= 4; row++)
{
printf("%6d", row + 1);
for (column = 0; column <= 3; column++)
{
printf("%12d", v[row][column]);
}
printf("\n");
}
printf("Total:");
for (column = 0; column < 4; column++)
{
printf("%12d", tc[column]);
}
printf("\n");
printf("\n\nPercent:");
for (column = 0; column < 4; column++)
{
printf("%11.4f", p[column]);
}
int index1 = 0, index2 = 0;
int maximum = p[0];
int i;
for (i = 0; i < 4; i++)
{
if (maximum < p[1])
{
maximum = p[i];
index1 = i;
}
}
int secondhigh = -1;
for (i = 0; i < 4; i++)
{
if (i != index1)
{
if (p[i] < maximum && secondhigh < p[i])
{
secondhigh = p[i];
index2 = i;
}
}
}
if (maximum > 50)
{
printf("\n\nCandidate %c is the Winner\n", c[index1]);
}
else
{
printf("\n\nCandidate %c and %c will have a runoff\n", c[index1], c[index2]);
}
int k, j;
char l;
for (i = 0; i < 4; i++)
{
for (j = i + 1; j < 4; j++)
{
if (p[i] < p[j])
{
k = p[i];
p[i] = p[j];
p[j] = k;
l = c[i];
c[i] = c[j];
c[j] = l;
}
}
}
return 0;
}