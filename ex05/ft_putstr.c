/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogazide <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:04:21 by nogazide          #+#    #+#             */
/*   Updated: 2020/07/16 11:04:24 by nogazide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_putstr(char *str)
{
 int i;
 i = 0;
 while( str[i] != '\0')
 {
	ft_putchar(str[i]);
   i++;
 }  

