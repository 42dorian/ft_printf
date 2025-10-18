/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:16:06 by dabdulla          #+#    #+#             */
/*   Updated: 2025/10/17 19:53:26 by dabdulla         ###   ########.fr       */
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
	int count;

	count = 0;
	if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(c);
	return (count);
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
		if (format[i] == '%')
			len += handle_args(format[++i], args);
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	void *s;
	s = NULL;
	// ft_printf(s, (int)1);
	// ft_printf("%s%Z\n", s);
	printf("%p", s);

	// \t \n \v \f \r
	return (0);
}