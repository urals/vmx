/******************************************************************************
 *   DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS HEADER.
 *
 *   This file is part of Real VMX.
 *   Copyright (C) 2008 Surplus Users Ham Society
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

/* cacheArchLib.h - Architecture dependent cache library header */

#ifndef _cacheArchLib_h
#define _cacheArchLib_h

#include <types/vmxCpu.h>
#include <vmx.h>

#if      CPU_FAMILY==I386
#include <arch/i386/taskI386Lib.h>
#endif

#ifndef _ASMLANGUAGE

#ifdef __cplusplus
extern "C" {
#endif

/* Functions */

/******************************************************************************
 * cacheArchInit - Initalize architecture dependent cache library
 *
 * RETURNS: OK or ERROR
 */

STATUS cacheArchLibInit(
    CACHE_MODE textMode,
    CACHE_MODE dataMode
    );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _ASMLANGUAGE */

#endif /* _cacheArchLib_h */
