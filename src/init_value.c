/*
** EPITECH PROJECT, 2018
** init_value.c
** File description:
** init value
*/

#include "minishell.h"

void init_value(struct mini *shell)
{
	shell->token = 0;
	shell->index = 0;
	shell->bin_l = 6;
	shell->stat_l = 5;
}
