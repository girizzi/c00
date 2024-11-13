/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girizzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:45:08 by girizzi           #+#    #+#             */
/*   Updated: 2024/11/12 11:52:30 by girizzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write (1, &c, 1);
		c--;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}*/
