/* SPDX-License-Identifier: GPL-3.0-or-later
 * SPDX-FileCopyrightText: Copyright (C) 2026 NexusSfan */

#ifndef _CLineB___LINECORE_ERRNOS_H__
#define _CLineB___LINECORE_ERRNOS_H__

#define EIO          1

/* Note that ENOSYS must be the last errno,
 * due to 255 being the maximum unsigned char.
 *
 * ENOSYS must be 255, as this is the value
 * used by LineKernel. */
#define ENOSYS     255

#endif
