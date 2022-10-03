#include <stdio.h>
#include <conio.h> //biblioteca de ponteiro
#include <locale.h> //biblioteca de acentos

int main (void)
{
	setlocale (LC_ALL, "Portuguese");
	
	int *p;
	int *q;
	int a, b, c;
	
	p = &a;
	q = &b;
	
	printf ("Digite um valor para A: \n");
	scanf ("%d", &a);
	printf ("Digite um valor para B: \n");
	scanf ("%d", &b);
	
	c = *p + *q;
	
	printf ("A soma de A + B é: %d \n", c);
	
	/*getch(); ESSE GETCH NÃO PERMITE QUE O PROGRAMA SE ENCERRE DEPOIS 
	DO RESULTADO, TEM QUE CLICAR NO "ENTER" 2X PARA ENSERRAR */
	return(0);
}
