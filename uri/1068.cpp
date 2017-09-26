#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


int main ()
{

	char mensagem[1005];

	while(scanf("%s", mensagem) != EOF)
	{
		int count = 0;
		int size = strlen(mensagem);
		for (int i = 0; i < size; ++i)
		{
			if (mensagem[i] == '(') count++;
			else if (mensagem[i] == ')') count--;
			if (count < 0) break;
		}

		printf("%s\n", (count==0) ? "correct" : "incorrect");
	}

	return 0;
}