#include <stdio.h>

int main()
{
	int ano_atual, ano_nascimento, idade;
	scanf("%d%d\n", &ano_nascimento, &ano_atual);

	idade = (ano_atual - ano_nascimento);

	printf("%d\n", idade);

	return 0;
}