#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void boneco(int num)
{
	if(num == 0)
	{
		printf("\n|----------|\n|           \n|           \n|           \n-------------\n");
	}
	else
	{
		if(num == 1)
		{
			printf("\n|----------|\n|          O\n|           \n|           \n-------------\n");
		}
		else
		{
			if(num == 2)
			{
				printf("\n|----------|\n|          O\n|          |\n|           \n-------------\n");
			}
			else
			{
				if(num == 3)
				{
					printf("\n|----------|\n|          O\n|         /|\n|           \n-------------\n");
				}
				else
				{
					if(num == 4)
					{
						printf("\n|----------|\n|          O\n|         /|\\\n|           \n-------------\n");
					}
					else
					{
						if(num == 5)
						{
							printf("\n|----------|\n|          O\n|         /|\\\n|         /\n-------------\n");
						}
						else
						{
							if(num == 6)
							{
								printf("\n|----------|\n|          O\n|         /|\\ \n|         /'\n-------------\n");
							}
							else
							{
								if(num == 7)
								{
									printf("\n|----------|\n|          O\n|         /|\\ \n|         /'\\\n------------- Game Over!!!\n");
								}
							}
						}
					}
				}
			}
		}
	}
}
