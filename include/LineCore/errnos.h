/* SPDX-License-Identifier: GPL-3.0-or-later
 * SPDX-FileCopyrightText: Copyright (C) 2026 Riversoft Studios */

#if !defined(_CLineB___LINECORE_ERRNOS_H__)
#define _CLineB___LINECORE_ERRNOS_H__

#define EIO          1
#define ENOENT       2
#define ENODRV       3
#define EBADF        4
#define EUSED        5

/* Note that ENOSYS must be the last errno,
 * due to 255 being the maximum unsigned char. */
#define ENOSYS     255

#endif
