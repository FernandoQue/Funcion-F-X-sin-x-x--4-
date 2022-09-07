//Creado por Fernando Quezada
//Espero te sirva mi código
//El programa lo compilo y lo ejecuto en terminal de linux
//utilizando el siguiente comando
//Compilacion $ gcc "nombre_archivo".c -o "nombre_archivo".out -lm
//Ejecución $ ./"nombre_archivo".out

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int x,vl,rp,vl2;
	float x1,x2,x3;
	char op;

	system("clear");

	printf("Bienvenido a nuestro programa\n");
	printf("El presente programa calcula la siguiente funcion:\n");
	printf("--> F(x)=(sin(x)/(x²-4))\n");
	printf("\nPresiona ENTER para continuar...");
	getchar();

	system("clear");

	printf("\nMenu:\n ");
	printf("\n1  Calcular Funcion.\n");
	printf("\n2  Salir.\n");

	printf("\nDigite la opcion preferida: ");
	scanf("%c",&op);

		if (isdigit(op))
		{
    			vl=1;
    			switch(vl)
			{
				case 1:
					do
					{
						system("clear");
						printf("Digite el valor de x: ");
						scanf("%d",&x);

						if(x!=2 && x!=-2)
						{
							x1=x*x;
							x2=sin((x*3.1416)/180);
							x3=x2/(x1-4);

							printf("El resultado es: %f\n",x1);
							printf("El resultado es: %f\n",x2);
							printf("El resultado es: %f\n",x3);
						}

						else
						{
							printf("El valor que digito genera una indeterminacion en la funcion");
							printf(" por lo cual el programa se dara por teminado.");
						}

						printf("\n\n¿Desea volver a calcular la funcion?\n");
						printf("Si = 1\n");
						printf("No = Cualquier otro numero");
						printf("\n\n-->");
						scanf("%d",&rp);

					}while(rp==1);
				break;

				case 2:printf("Saliendo del programa");break;

				default:printf("La opcion seleccionada no esta dentro del menu");
			}
		}
	    	else
	    	{
			system("clear");
	    		printf("Ingreso un dato incorrecto porfavor intentelo de nuevo");
	    		printf("\nRecuerde que el programa solo acepta numeros");
	    	}
	return 0;
}
