/* SPDX-License-Identifier: GPL-3.0-or-later
 * SPDX-FileCopyrightText: Copyright (C) 2026 Riversoft Studios */

#include "LineCore/errnos.h"

int errno = 0;

char* strerror(int errnum)
{
    switch (errnum) {
        case EIO:
            return "I/O error";
        case ENOSYS:
            return "Function not implemented";
        case ENOENT:
            return "No such entry";
        case ENODRV:
            return "No drive available";
        case EBADF:
            return "Bad fileno";
        case EUSED:
            return "Being used";
        default:
            return "???";
    }
}
