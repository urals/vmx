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

/*  string.h - String functions */

#ifndef _string_h_
#define _string_h_

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _ASMLANGUAGE

#include <sys/types.h>

/******************************************************************************
 * memchr - Get character position in string
 *
 * RETURNS: Pointer to first occurance of character in string
 */

void* memchr(
    const void *str,
    int c,
    size_t len
    );

/******************************************************************************
 * memcmp - Comapre contents in two different memory locations
 *
 * RETURNS: The dirrerance between match or zero
 */

int memcmp(
    const void *s1,
    const void *s2,
    size_t len
    );

/******************************************************************************
 * memcpy - Copy memory from location to another
 *
 * RETURNS: Pointer to destination
 */

void *memcpy(
    void *dest,
    const void *src,
    size_t size
    );

/******************************************************************************
 * memmove - Move between memory areas
 *
 * RETURNS: Pointer to destdination
 */

void* memmove(
    void *dst,
    const void *src, 
    size_t len
    );

/******************************************************************************
 * memset - Set memory location with data
 *
 * RETURNS: Pointer to destination
 */

void* memset(
    void *dest,
    char data,
    size_t size
    );

/******************************************************************************
 * memsetw - Set memory location int work chunks with data
 *
 * RETURNS: Pointer to destination
 */

void* memsetw(
    short *dest,
    short data,
    size_t size
    );

/******************************************************************************
 * strcat - Contatenate to string
 * 
 * RETURNS: Destination string
 */

char* strcat(
    char *s1,
    const char *s2
    );

/******************************************************************************
 * strncat - Safe string concatenation
 *
 * RETURNS: Pointer to destination
 */

char* strncat(
    char *s1,
    const char *s2,
    size_t n
    );

/******************************************************************************
 * strchr - Find character within string 
 *
 * RETURNS: Pointer to character or NULL
 */

char* strchr(
    const char *s,
    int c
    );

/******************************************************************************
 * strrchr - Find character in string revesed 
 * 
 * RETURNS: Pointer to character or NULL
 */

char* strrchr(
    const  char *s,
    int c
    );

/******************************************************************************
 * strcmp - Comapre two strings
 *
 * RETURNS: Zero if equal
 */

int strcmp(
    const char *s1,
    const char *s2
    );

/******************************************************************************
 * strncmp - Safe string compare
 *
 * RETURNS: Zero if equal
 */

int strncmp(
    const char *s1,
    const char *s2,
    size_t n
    );

/******************************************************************************
 * strcpy - Compy source string to destination
 *
 * RETURNS: Pointer to destination string
 */

char* strcpy(
    char *s1,
    const char *s2
    );

/******************************************************************************
 * strncpy - Safe string copy
 *
 * RETURNS: Pointer to destination
 */

char* strncpy(
    char *s1,
    const char *s2,
    size_t size
    );

/******************************************************************************
 * strlen - Get string lenth
 * 
 * RETURNS: Number of characters in string
 */

size_t strlen(
    const char *str
    );

/******************************************************************************
 * strpbrk -
 *
 * RETURNS: Pointer in string or NULL
 */

char* strpbrk(
    const char *str,
    const char *set
    );

/******************************************************************************
 * strspn - Return the length of the maximum initial segment
 *
 * RETURNS: Number of chars
 */

size_t strspn(
    const char *s,
    const char *accept
    );

/******************************************************************************
 * strtok - Find string separator token
 *
 * RETURNS: Pointer in string or NULL
 */

char* strtok(
    char *s,
    const char *delim
    );

/******************************************************************************
 * strtok_r - Reverse find string separator token
 *
 * RETURNS: Pointer in string or NULL
 */

char* strtok_r(
    char *s,
    const char *delim,
    char **save_ptr
    );

#endif

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif

