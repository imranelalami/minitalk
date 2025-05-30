/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@1337.student.ma>            +#+  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:20:54 by iel-alam            #+#    #+#           */
/*   Updated: 2025/01/08 19:13:14 by iel-alam           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 0)
		write(1, "\nInvalid pid, most be more than zero\n\n", 38);
	else if (nb >= 10)
	{
		ft_putnbr((nb / 10));
		ft_putchar((nb % 10) + '0');
	}
	else
		ft_putchar(nb + 48);
}

int	ft_atoi(char *str)
{
	int		i;
	long	j;
	int		k;

	i = 0;
	k = 1;
	j = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			k = -k;
		i++;
	}
	while (str[i] != '\0' && ('0' <= str[i] && str[i] <= '9'))
	{
		j = (j * 10 + (str[i] - 48));
		i++;
	}
	if (str[i] != '\0')
		return (-42);
	return ((int)j * k);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	while (*s == '+')
		s++;
	while (*s == '0')
		s++;
	len = 0;
	while (s[len])
		len++;
	return (len);
}
