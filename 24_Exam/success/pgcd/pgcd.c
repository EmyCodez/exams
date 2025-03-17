#include<stdio.h>
#include<stdlib.h>

void	pgcd(int nbr1, int nbr2)
{
while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("%d", nbr1);
}

int main(int argc, char **argv)
{
	int num1;
	int num2;
  if(argc==3)
  {
	  num1=atoi(argv[1]);
	  num2=atoi(argv[2]);
 if (num1 >0 && num2 >0)
	 pgcd(num1,num2);
  }
 printf("\n");
 return(0); 
}	
