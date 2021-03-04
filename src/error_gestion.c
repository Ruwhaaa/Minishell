/*
** EPITECH PROJECT, 2018
** error_gestion.c
** File description:
** error gestion
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "minishell.h"

int error_binary(int ac, char **av, struct mini *shell)
{
	init_value(shell);

	shell->binary = malloc(sizeof(char) * shell->bin_l);
	if (!shell->binary) {
		return (84);
	}
	shell->binary = "./mysh";

	while (av[0][shell->index] != '\0') {
		if (av[0][shell->index] == shell->binary[shell->index]) {
			shell->token = shell->token + 1;
		}
		shell->index = shell->index + 1;
	}
	if (ac == 1 && shell->token == 6) {
		exit_gestion(shell);
	}
	return (0);
}

int exit_gestion(struct mini *shell)
{
	init_value(shell);

	shell->status = malloc(sizeof(char) * shell->stat_l);
	if (!shell->status) {
		return (84);
	}
	shell->status = "exit";
	minishell(shell);
	return (0);
}
