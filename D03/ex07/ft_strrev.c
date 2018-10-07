/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdloko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 16:50:12 by bdloko            #+#    #+#             */
/*   Updated: 2017/04/27 01:47:20 by bdloko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int n;
	char tmp;

	i = 0;
	n = ft_strlen(str);
	while (n - 1 > i)
	{
		tmp = str[i];
		str[i] = str[n - 1];
		str[n - 1] = tmp;
		n--;
		i++;
	}
	return (str);
}
