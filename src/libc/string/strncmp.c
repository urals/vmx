/******************************************************************************
 *   DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS HEADER.
 *
 *   This file is part of Real VMX.
 *   Copyright (C) 2013 Surplus Users Ham Society
 *
 *   Real VMX is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Real VMX is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Real VMX.  If not, see <http://www.gnu.org/licenses/>.
 */

/* strncmp.c - Compare strings with n bytes */

#include <sys/types.h>
#include <vmx.h>

/******************************************************************************
 * strncmp - Safe string compare
 *
 * RETURNS: Zero if equal
 */

int strncmp(
    const char *s1,
    const char *s2,
    size_t n
    )
{
    int r = 0;

    while (
        n-- &&
        ((r = ((int)(*((unsigned char *)s1))) - *((unsigned char *)s2++))
               == 0) &&
        *s1++
        );

    return r;
}

