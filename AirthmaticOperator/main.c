#include<stdio.h>
#include<conio.h>

int main() {
	int i;
        clrscr();
	printf("ASCII  ==>  Character\n");
	for(i = -128; i <= 127; i++)
	   printf("%d    ==>     %c\n", i, i);
        getch();
	return 0;
}
