/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_fork.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 16:29:19 by ztisnes           #+#    #+#             */
/*   Updated: 2018/03/27 12:51:55 by 42vecmac2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <signal.h>
#include <sys/types.h>

/* Understanding how the system call fork() works */

int main(void)
{
	pid_t p;

	p = fork();
	printf("I'm the parent #0\n");
	if (p > 0)
		printf("I'm the parent #1\n");
	if (p == 0)
		printf("I'm the child #0\n");
}
