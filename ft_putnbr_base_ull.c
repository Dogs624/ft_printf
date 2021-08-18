#include "libftprintf.h"

int	ft_putnbr_base_ull(unsigned long long nbr, char *base)
{
	char				nb_to_print[32];
	int					cpt;
	int					ret;

	nb_to_print[ft_nb_len(nbr)] = '\0';
	cpt = 0;
	ret = 1;
	// if (nbr_to_use < 0)
	// {
	// 	ft_putchar('-');
	// 	nbr_to_use = -nbr_to_use;
	// 	ret++;
	// }
	while (nbr > ft_strlen(base) - 1)
	{
		nb_to_print[cpt++] = base[nbr % ft_strlen(base)];
		nbr /= ft_strlen(base);
		ret++;
	}
	nb_to_print[cpt++] = base[nbr % ft_strlen(base)];
	while (--cpt >= 0)
		ft_putchar(nb_to_print[cpt]);
	return (ret);
}
