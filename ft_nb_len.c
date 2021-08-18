/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <jvander-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:17:38 by jvander-          #+#    #+#             */
/*   Updated: 2021/08/18 13:58:35 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nb_len(int nbr)
{
	int					ret;
	long long			nbr_use;

	ret = 1;
	nbr_use = nbr;
	if (nbr < 0)
	{
		ret++;
		nbr_use = -nbr;
	}
	while (nbr_use > 9)
	{
		ret++;
		nbr_use /= 10;
	}
	return (ret);
}
