/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 09:16:54 by momogash          #+#    #+#             */
/*   Updated: 2019/08/08 09:19:50 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char b)
{
	unsigned char r;
	unsigned byte_len;

	r = 0;
	byte_len = 8;

	while	(byte_len--)
	{
		r = (r << 1) | (b & 1);
		b >> 1;	   
	}
	return (r);
}
