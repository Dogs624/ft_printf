/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <jvander-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 09:59:05 by jvander-          #+#    #+#             */
/*   Updated: 2021/08/17 15:50:39 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_base(unsigned long long nbr, char *base)
{
	char			*nb_to_print;
	int				cpt;
	// long			nbr_to_use;

	nb_to_print = malloc(sizeof(char) * ft_nb_len(nbr) + 1);
	if (!nb_to_print)
		return (0);
	nb_to_print[ft_nb_len(nbr)] = '\0';
	cpt = 0;
	// nbr_to_use = (long)nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		// nbr_to_use = -nbr_to_use;
	}
	while (nbr > 9)
	{
		*(nb_to_print + cpt++) = *(base + (nbr % ft_strlen(base)));
		nbr /= ft_strlen(base);
	}
	*(nb_to_print + cpt++) = *(base + (nbr % ft_strlen(base)));
	while (--cpt >= 0)
		ft_putchar(*(nb_to_print + cpt));
	free(nb_to_print);
	return (ft_strlen(nb_to_print));
}
