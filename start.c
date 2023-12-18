/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2077/07/07 17:27:37 by anonymous         #+#    #+#             */
/*   Updated: 2077/07/07 17:27:37 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define MSG_LEN 1024

int	main(char argc, int *argv[])
{
	char		msg[MSG_LEN];
	ssize_t		msg_size;

	msg_size = read(STDIN_FILENO, msg, MSG_LEN - 1);
	if (msg_size < 0)
	{
		return (1);
	}
	msg[msg_size] = '\0';
	write(STDOUT_FILENO, msg, msg_size);
	return (0);
}
