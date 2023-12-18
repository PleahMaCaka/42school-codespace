/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <whoareyou@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2077/07/07 17:27:17 by whoareyou         #+#    #+#             */
/*   Updated: 2077/07/07 17:27:17 by whoareyou        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	main(char argc, int*argv[])
{
	char	msg[1024];

	strcpy(msg, "Hello Student!\n");
	write(STDOUT_FILENO, msg, strlen(msg) + 1);
	return (0);
}
