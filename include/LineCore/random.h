/* SPDX-License-Identifier: GPL-3.0-or-later
 * SPDX-FileCopyrightText: Copyright (C) 2026 Riversoft Studios */

#if !defined(_CLineB___LINECORE_RANDOM_H__)
#define _CLineB___LINECORE_RANDOM_H__

#include <LineKernel/rand_max.h>

#if !defined(_CLineB__NEEDS)
#define _CLineB__NEEDS
#define _CLineB__NEEDS_RAND
#endif

#include <CLineB/decl.h>
_CLineB___BEGIN_DECL

#if defined(_CLineB__NEEDS_RAND)
int rand(void);
#endif

_CLineB___END_DECL

#undef _CLineB__NEEDS_RAND
#undef _CLineB__NEEDS

#endif
