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

/* puts.c - Standard input/output */

#include <stdio.h>
#include <string.h>
#include <vmx.h>

/******************************************************************************
 * puts - Print string on stdout
 *
 * RETURNS: N/A
 */

int puts(
    const char *str
    )
{
    struct __suio uio;
    struct __siov iov[2];
    size_t len = strlen(str);

    iov[0].iov_base = (void *) str;
    iov[0].iov_len  = len;

    iov[1].iov_base = "\n";
    iov[1].iov_len  = 1;

    uio.uio_resid   = len + 1;
    uio.uio_iov     = &iov[0];
    uio.uio_iovcnt  = 2;

    return ((__sfvwrite(stdout, &uio)) ? (EOF) : ('\n'));
}

