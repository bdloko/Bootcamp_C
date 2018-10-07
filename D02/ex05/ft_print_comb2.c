/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdloko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 03:20:24 by bdloko            #+#    #+#             */
/*   Updated: 2017/04/26 03:45:41 by bdloko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	char loop[4];

	loop[3] = 1;
	while (!((loop[0] == 9) && (loop[1] == 9)))
	{
		ft_putchar(loop[0] + 48);
		ft_putchar(loop[1] + 48);
		ft_putchar(' ');
		ft_putchar(loop[2] + 48);
		ft_putchar(++loop[3] + 47);
		if (!((loop[0] == 9) && (loop[1] == 8)))
			ft_putchar(',');
		if (!((loop[0] == 9) && (loop[1] == 8)))
			ft_putchar(' ');
		if ((loop[3] = loop[3] % 10) == 0)
			loop[2]++;
		if (loop[2] == 10)
		{
			loop[2] = loop[0];
			loop[1]++;
			if ((loop[1] = loop[1] % 10) == 0)
				loop[0]++;
			loop[3] = loop[1];
		}
	}
}
