/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girizzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:29:00 by girizzi           #+#    #+#             */
/*   Updated: 2024/11/12 14:14:23 by girizzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	i;

	p = 'P';
	i = 'N';
	if (n < 0)
	{
		write(1, &i, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(0);
	return (0);
}*/
