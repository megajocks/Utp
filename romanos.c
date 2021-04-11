#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>




int main(int argc, char const *argv[])
{
	char romanos[3];
	int arabigos=0;
	int valor=0;
	int x=0,numero=0,i=0;
	

	//operacion

	int unidades,decenas,centenas,millar;


	//administrativos
	int eleccion=0;
	int a=0;


while(a<1)
	{
	printf("\n\n");
	printf("---Conversiones---\n");
	printf("----------------------------\n");
	printf("1. Romanos\n");
	printf("2. Arabigos\n");
	printf("3. Salir\n");
	printf("----------------------------\n");
	printf("\n\n");

	printf("Eleccion:   \n");
	scanf("%d",&eleccion);
	printf("\n\n");

	

		switch(eleccion)
	{
		case 1:
		printf("Escribe un numero romano:   ");
		scanf("%s",&romanos);
			
					for (i = 0; i < strlen(romanos); ++i)
						{
							if (romanos[i]=='I' || romanos[i]=='i')
							{
								valor+=1;
							}
							if (romanos[i]=='V' || romanos[i]=='v')
							{
					        	valor+=5;	
							}
					    	if (romanos[i]=='X' || romanos[i]=='x')
					    	{
					    		valor+=10;		
					    	}
					    	if(romanos[i]=='L' || romanos[i]=='l')
					    	{
					    		valor+=50;
					    	}
					    	if (romanos[i]=='C' || romanos[i]=='c')
					    	{
					    		valor+=100;
					    	}
					    	if (romanos[i]=='D' || romanos[i]=='d')
					    	{
					    		valor+=500;
					    	}
					    	if (romanos[i]=='M' || romanos[i]=='m')
					    	{
					    		valor+=1000;
					    	}
					    	
						}
				
					numero+=valor;

		printf("\nNumero arabigo: %d",numero );
		break;
		
		case 2: 
		printf("Escribe un numero arabigo:  \n");
		scanf("%d",&arabigos);

		unidades=arabigos%10; arabigos /= 10;
		decenas=arabigos%10; arabigos /= 10;
		centenas=arabigos%10; arabigos /= 10;
		millar=arabigos%10; arabigos /= 10;

		printf("\n\n");

		switch(millar)
		{
			case 1: printf("M\n");break;
			case 2: printf("MM\n");break;	
			case 3: printf("MMM\n");break;
		}
		
		switch(centenas)
		{
			case 1: printf("C\n");break;
			case 2: printf("CC\n");break;
			case 3: printf("CCC\n");break;
			case 4: printf("CD\n");break;
			case 5: printf("D\n");break;
			case 6: printf("DC\n");break;
			case 7: printf("DCC\n");break;
			case 8: printf("DCCC\n");break;
			case 9: printf("CM\n");break;
		}

		switch(decenas)
		{
			case 1: printf("X\n");break;
			case 2: printf("XX\n");break;
			case 3: printf("XXX\n");break;
			case 4: printf("XL\n");break;
			case 5: printf("L\n");break;
			case 6: printf("LX\n");break;
			case 7: printf("LXX\n");break;
			case 8: printf("LXXX\n");break;
			case 9: printf("XC\n");break;
		}
		switch(unidades)
		{
			case 1: printf("I\n");break;
			case 2: printf("II\n");break;
			case 3: printf("III\n");break;
			case 4: printf("IV\n");break;
			case 5: printf("V\n");break;
			case 6: printf("VI\n");break;
			case 7: printf("VII\n");break;
			case 8: printf("VIII\n");break;
			case 9: printf("IX\n");break;
		}
		break;

		case 3:
		exit;
		break;
 	}
	
	return 0;
}
}

