/* SPDX-License-Identifier: GPL-3.0-or-later
 * SPDX-FileCopyrightText: Copyright (C) 2026 NexusSfan */

#ifndef _CLineB___LINECORE_RANDOM_H__
#define _CLineB___LINECORE_RANDOM_H__

#ifndef _CLineB__NEEDS
#define _CLineB__NEEDS
#define _CLineB__NEEDS_RAND
#endif

#ifdef _CLineB__NEEDS_RAND
int rand(void);
#endif

#undef _CLineB__NEEDS_RAND
#undef _CLineB__NEEDS

#endif
