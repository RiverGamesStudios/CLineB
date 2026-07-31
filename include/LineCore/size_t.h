/* SPDX-License-Identifier: GPL-3.0-or-later
 * SPDX-FileCopyrightText: Copyright (C) 2026 Riversoft Studios */

#if !defined(_LineCore___SIZE_T_H__)
#define _LineCore___SIZE_T_H__

/* You could get a more accurate size_t by doing (gcc):
 * `$(CC) -dM -E - < /dev/null | grep __SIZE_TYPE__`
 * because SIZE_TYPE always is the same as `size_t`. */

#if defined(__SIZE_TYPE__)
	typedef __SIZE_TYPE__ size_t;
#else
	/* Assuming ILP32 and LP64 for now, since ELF follows this(?) */
	typedef long unsigned int size_t;
#endif

/* Assuming ILP32 and LP64 for now, since ELF follows this(?) */
typedef long int ssize_t;

#endif
