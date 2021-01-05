/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae-kim <jae-kim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 12:31:21 by jae-kim           #+#    #+#             */
/*   Updated: 2021/01/01 12:39:49 by jae-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t    ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t len;

    len = 0;
    if (ft_strlen(dst) > dstsize)
        return (dstsize + ft_strlen(src));
    while (*dst && len++ < dstsize)
        dst++;
    while (*dst)
        dst++;
    while (len < (dstsize - 1) && *src)
    {
        *dst++ = *src++;
        len++;
    }
    while (*src)
    {
        src++;
        len++;
    }
    *dst = 0;
    return (len);
}