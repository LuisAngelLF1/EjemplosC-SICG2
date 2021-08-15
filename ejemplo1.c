/*author: Luis López
programa que recorre String e imprimer sus caracteres
*/
#include <stdio.h>

int main(int argc, char **argv)
{
	char nombre[]="Luis";
	int i;
  	for (i=0; i<5;i++){
	  printf("%c \n",nombre[i]);
	  }
	return 0;
}