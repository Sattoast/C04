/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etfernan <etfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:38:18 by etfernan          #+#    #+#             */
/*   Updated: 2025/09/08 17:00:50 by etfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_sign(const char *str, int i, int *negative)
{
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*negative = -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	negative;
	long	res;

	i = 0;
	is_neg = 1;
	res = 0;
	while ((str[i] == 32 || str[i] >= 9 && str[i] <= 13))
		i++;
	i = check_sign(str, i, &negative);
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			break ;
		else
			res = (res * 10) + str[i] - 48;
		i++;
	}
	return (res * negative);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("   ---+--+1234ab567"));
// }

