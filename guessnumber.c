#include <stdio.h>
#include <stdlib.h>

int	main(void)
{ 
	int	guess;
	int	i;
	int	count = 5;
	
	printf("\nThis is a guessing game");
	printf("\nI have chosen a number between 0 and 20 which you must guess\n");
	
	int	tries = 5;

	while (tries > 0 && guess != 10) 
	{
		for (i = 1; i <= count; ++i)
		{
			printf("\nYou have %d tries left", tries);
			printf("\nEnter a Guess: ");
			scanf("%d", &guess);

			if (guess > 10)
			{	
				printf ("\nSorry, %d is wrong, my number is less than that", guess);
					 
			}
			else if (guess < 10)
			{
				printf( "\nSorry, %d is wrong, my number is more than that", guess);
				
			}
			else 
			{
				
				printf("Congratulations. You guesses it right!\n");
				break;
			}
			--tries;
		}
		
	}
	
}
