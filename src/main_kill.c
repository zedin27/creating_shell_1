/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_kill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42vecmac <42vecmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 12:51:13 by 42vecmac          #+#    #+#             */
/*   Updated: 2018/03/30 14:56:58 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <signal.h>
#include <sys/types.h>

/*
** kill() sends any signtal to any process group or single process.
** At first, I thought it just another way to describe exit(), but is different.
** It uses the "signal.h" that handles the number of the signal type.
** 0 SIGNULL	->	Null Check access to pid
** 1 SIGHUP		->	Hangup Terminate; can be trapped
** 2 SIGINT		->	Interrupt Terminate; can be trapped
** 3 SIGQUIT	->	Quit Terminate with core dump; can be trapped
** 9 SIGKILL	->	Kill Forced termination; cannot be trapped
** 15 SIGTERM	->	Terminate Terminate; can be trapped
** 24 SIGSTOP	->	Stop Pause the process; cannot be trapped
** 25 SIGTSTP	->	Terminal stop Pause the process; can be
** 26 SIGCONT	->	Continue Run a stopped process
** test
*/

void handle_sigint(int sig)
{
	printf("Caught signal %d\n", sig);
}

int main()
{
	signal(SIGINT, handle_sigint);
	while (1) ;
	return 0;
}
