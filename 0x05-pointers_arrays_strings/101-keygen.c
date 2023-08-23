#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

char generate_random_char()
{
	int random_num = rand() % 52;

	if (random_num < 26)
	{
		return ('A' + random_num);
	}
	else
	{
		return ('a' + (random_num - 26));
	}
}

void generate_password(char *password)
{
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = generate_random_char();
	}
	password[PASSWORD_LENGTH] = '\0';
}

int main()
{
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];
	generate_password(password);

	printf("Generated Password: %s\n", password);

	return (0);
}
