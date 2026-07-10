#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>  // srand

void palavra(char vet[])
{
	int opc;
	printf("**********Escolha um genero**********\n");
	printf("\t 1 - Minecraft\n");	
	printf("\t 2 - Computacao\n");
	printf("\t 3 - Proplayers de ConterStrike\n");
	printf("\t Escolha:");
	scanf("%d",&opc);
	int temp;
	switch (opc)
	{

		case(1):
		{
			char mine [][20] = 
				{
					"ender-dragon",
					"enderman",
					"creeper",
					"abelha",
					"ovelha",
					"vaca",
					"lobo",
					"aldeao",
					"axolote",
					"baiacu",
					"cavalo"
				};
				printf("Tema escolhido foi Minecraft!!!!!!!!\n");
				temp = rand() % 11;
				strcpy(vet,mine[temp]);
				return;
				
		}
		case(2):
		{
			char comp[][20] =
				{
					"docker",
					"linux",
					"python",
					"algoritmo",
					"compilador",
					"memoria",
					"servidor",
					"frontend",
					"backend",
					"terminal",
					"internet",
					"processador",
					"kernel",
					"estrutura",
					"recursao",
					"matriz",
					"arquivo",
					"funcao"
				};
				printf("Tema escolhido foi Computaria!!!!!!!!\n");
				temp = rand() % 18;
				strcpy(vet,comp[temp]);
				return;
			}
		case(3):
		{
			char cs[][20] = 
				{
					"fallen",
					"fer",
					"fnx",
					"niko",
					"donk",
					"rain",
					"naf",
					"coldzera",
					"chelo",
					"yuurih",
					"monesy",
					"broky",
					"xantares"
				};
				printf("Tema escolhido foi Proplayers de CS!!!!!!!!\n");
				temp = rand() % 13;
				strcpy(vet,cs[temp]);
				return;
		}
	}
}
