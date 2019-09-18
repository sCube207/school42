/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrawp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 11:22:37 by pgrawp            #+#    #+#             */
/*   Updated: 2019/08/06 17:29:29 by pgrawp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	if (nb / 10 == 0 && nb < 0)
		ft_putchar('-');
	ft_putchar((nb > 0 ? nb % 10 : -(nb % 10)) + '0');
}
