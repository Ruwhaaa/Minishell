/*
** EPITECH PROJECT, 2017
** minishell.h
** File description:
** minishell + my
*/

#include <stdio.h>
#include <unistd.h>

#ifndef LIST_H_
#define LIST_H_

struct mini
{
	pid_t pid;
	size_t len;
	ssize_t read;

	char *binary;
	char *status;
	char *buffer;
	int bin_l;
	int stat_l;
	int index;
	int token;
};

int my_putstr(char const *str);
void my_putchar(char c);
int minishell(struct mini *shell);
int error_binary(int ac, char **av, struct mini *shell);
int exit_gestion(struct mini *shell);
void init_value(struct mini *shell);

#endif /* !LIST_H_ */
