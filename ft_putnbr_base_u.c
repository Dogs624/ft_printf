#include "libftprintf.h"

int	ft_putnbr_base_u(unsigned int nbr, char *base)
{
	char				nb_to_print[32];
	int					cpt;
	unsigned long long	nbr_to_use;
	int					ret;

	nb_to_print[ft_nb_len(nbr)] = '\0';
	cpt = 0;
	ret = 1;
	nbr_to_use = nbr;
	// if (nbr_to_use < 0)
	// {
	// 	ft_putchar('-');
	// 	nbr_to_use = -nbr_to_use;
	// 	ret++;
	// }
	while (nbr_to_use > ft_strlen(base) - 1)
	{
		nb_to_print[cpt++] = base[nbr_to_use % ft_strlen(base)];
		nbr_to_use /= ft_strlen(base);
		ret++;
	}
	nb_to_print[cpt++] = base[nbr_to_use % ft_strlen(base)];
	while (--cpt >= 0)
		ft_putchar(nb_to_print[cpt]);
	return (ret);
}