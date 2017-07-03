#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MAXVAL 100

int sp=0;
double val [MAXVAL];

void push (double f)
{
	if (sp<MAXVAL)
	val[sp++]=f;
	else
	printf ("error pila llena, no se puede pushear");
}

double pop (void)
{
if (sp>0)
return val [sp++];
else
{
printf ("pila vacia");
return 0.0;
}
}


int main(int argc, char *argv[]) {
return 0;
}
