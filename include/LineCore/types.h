/* SPDX-License-Identifier: GPL-3.0-or-later
 * SPDX-FileCopyrightText: Copyright (C) 2026 NexusSfan */

#ifndef _CLineB___LINECORE_TYPES_H__
#define _CLineB___LINECORE_TYPES_H__

#ifndef _CLineB__NEEDS
#define _CLineB__NEEDS
#define _CLineB__NEEDS_INT_T
#endif

#ifdef _CLineB__NEEDS_INT_T
/* Types by size. */
typedef signed char int8_t;
typedef unsigned char uint8_t;

typedef signed short int16_t;
typedef unsigned short uint16_t;

typedef signed int int32_t;
typedef unsigned int uint32_t;

typedef signed long int64_t;
typedef unsigned long uint64_t;
#endif

#undef _CLineB__NEEDS_INT_T
#undef _CLineB__NEEDS

#endif
