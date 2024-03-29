/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:03:59 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/29 17:26:32 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		j;
	char	**result;
	int		number;

	if (ac == 2)
	{
		j = 0;
		result = av_one_arg(av);
		if (result == NULL)
		{
			free_string_array(result);
			return (0);
		}
		if (is_correct_zero_arr(result) == 1)
		{
			free_string_array(result);
			return (0);
		}
		if (have_duplicates_arr(result) == 1)
		{
			free_string_array(result);
			return (0);
		}
		while (result[j])
		{
			number = ft_atoi_ps(result[j]);
			if (ft_atoi_ps(result[j]) == 1)
			{
				free_string_array(result);
				ft_display_exit_ps();
			}
			j++;
		}
		j = 0;
		while (result[j])
		{
			number = ft_atoi_ps(result[j]);
			printf("%d\n", number);
			j++;
		}
		free_string_array(result);
	}
	if (ac > 2)
	{
		j = 0;
		if (is_correct_zero(av) == 1)
			return (1);
		result = av_args(av);
		if (result == NULL)
			return (0);
		while (result[j])
		{
			number = ft_atoi_ps(result[j]);
			if (ft_atoi_ps(result[j]) == 1)
				ft_display_exit_ps();
			j++;
		}
		j = 0;
		while (result[j])
		{
			number = ft_atoi_ps(result[j]);
			printf("%d\n", number);
			j++;
		}
	}
	return (0);
}
