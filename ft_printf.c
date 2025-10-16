/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:16:06 by dabdulla          #+#    #+#             */
/*   Updated: 2025/10/16 16:25:31 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int check_input(const char *format, va_list args)
// {
// 	/*
// 	if != c return expects c
// 	handle too many args
// 	handle fewer args
// 	maybe also \n? or in general escape sequences
// 	return 0 on error
// 	*/
// 	return (1);
// }

int	handle_args(const char c, va_list args)
{
	if (c)
		return (0);
	if (args)
		return (0);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!format)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && (format[i + 1]))
			len += handle_args(format[++i], args);
		else
			len += ft_putchar(format[++i]); // prolly need to handle some edge cases here
		i++;
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	char *s = "asd %";
	// ft_printf(s, (int)1);
	printf("%s", s);

	// \t \n \v \f \r
	return (0);
}