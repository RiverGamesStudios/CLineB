/* SPDX-License-Identifier: GPL-3.0-or-later
 * SPDX-FileCopyrightText: Copyright (C) 2026 Riversoft Studios */

#include <LineKernel/syscall.h>
#include <LineKernel/linecolor_t.h>

void writestring(char* array)
{
	syscall3(SYS_print2, (long)array, 0, 0);
}

void termcolor(linecolor_t fg_color, linecolor_t bg_color)
{
	syscall3(SYS_termcolor, fg_color, bg_color, 0);
}

void termscolor(void)
{
	syscall3(SYS_termscolor, 0, 0, 0);
}

void termclear(void)
{
	syscall3(SYS_termclear, 0, 0, 0);
}

void termcursor(int x, int y)
{
	syscall3(SYS_termcursor, x, y, 0);
}
