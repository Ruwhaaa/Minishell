/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "minishell.h"

int main(int ac, char **av, char **ae)
{
	struct mini shell;

	init_value(&shell);
	error_binary(ac, av, &shell);
}
