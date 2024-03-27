/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:09:54 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/27 14:34:57 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	char	**result;

	i = 0;
	if (ac == 2)
	{
		result = av_one_arg(av);
		if (result == NULL)
			return (0);
		while (result[i] != NULL)
		{
			printf("%s\n", result[i]);
			i++;
		}
	}
	if (ac > 2)
	{
		result = av_args(av);
		if (result == NULL)
			return (0);
		while (result[i] != NULL)
		{
			printf("%s\n", result[i]);
			i++;
		}
	}
	return (0);
}
