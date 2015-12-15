#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,j;
    printf("\t\t ");
for(i=1;i<=42;i++)printf("_");
printf("\n");
printf("\t       /  ");
for(i=1;i<=40;i++)printf("1");
printf(" \\\n\t\t  ");
printf("\n");
printf("\t       |  ");
for(i=1;i<=40;i++)printf("*");
printf("  |\n\t       |   ");
for(i=1;i<=38;i++)printf("_");
printf("   |");


for(j=1;j<=10;j++){printf("\n\t       |1*|");
for(i=1;i<=38;i++)printf(" ");
printf("|1*|");}


printf("\n\t       |1*|");
for(i=1;i<=38;i++)printf("_");
printf("|1*| ");
printf("\n\t       |  ");
for(i=1;i<=40;i++)printf("1");
printf("  |\n");
printf("\t       |  ");
for(i=1;i<=40;i++)printf("*");
printf("  |\n\t       |  ");
printf("   \n\t        \\ ");
for(i=1;i<=40;i++)printf("_");
printf(" /");





printf("\n\n\n\n\n\n\n\n\n\n\n");
    return 0;
}
