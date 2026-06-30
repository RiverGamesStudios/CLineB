/* SPDX-License-Identifier: GPL-3.0-or-later
 * SPDX-FileCopyrightText: Copyright (C) 2026 NexusSfan */

#ifndef _CLineB___LINECORE_CONSOLE_H__
#define _CLineB___LINECORE_CONSOLE_H__

#ifndef _CLineB__NEEDS
#define _CLineB__NEEDS
#define _CLineB__NEEDS_WRITESTRING
#define _CLineB__NEEDS_GETCHAR
#endif

#ifdef _CLineB__NEEDS_WRITESTRING
int writestring(char* array);
#endif
#ifdef _CLineB__NEEDS_GETCHAR
int getchar(void);
#endif

#undef _CLineB__NEEDS_WRITESTRING
#undef _CLineB__NEEDS_GETCHAR
#undef _CLineB__NEEDS

#endif
