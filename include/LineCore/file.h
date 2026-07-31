/* SPDX-License-Identifier: GPL-3.0-or-later
 * SPDX-FileCopyrightText: Copyright (C) 2026 River Games */

#if !defined(_CLineB___LINECORE_FILE_H__)
#define _CLineB___LINECORE_FILE_H__

#if !defined(_CLineB__NEEDS)
#define _CLineB__NEEDS
#define _CLineB__NEEDS_PREDEFINED_FILENO
#define _CLineB__NEEDS_CLOSE
#define _CLineB__NEEDS_OPEN
#define _CLineB__NEEDS_RENAME
#define _CLineB__NEEDS_MAKEDIR
#define _CLineB__NEEDS_REMOVEDIR
#define _CLineB__NEEDS_REMOVE
#define _CLineB__NEEDS_FSIZE
#define _CLineB__NEEDS_WRITE
#define _CLineB__NEEDS_READ
#define _CLineB__NEEDS_LISTDIR
#endif

#if defined(_CLineB__NEEDS_PREDEFINED_FILENO)
#include <LineKernel/predefined_fileno.h>
#endif

#include <CLineB/decl.h>
_CLineB___BEGIN_DECL

#if defined(_CLineB__NEEDS_CLOSE)
int close(int fileno);
#endif

#if defined(_CLineB__NEEDS_OPEN)
int open(const char* filename);
#endif

#if defined(_CLineB__NEEDS_RENAME)
int rename(const char* oldpath, const char* newpath);
#endif

#if defined(_CLineB__NEEDS_MAKEDIR)
int makedir(const char* path);
#endif

#if defined(_CLineB__NEEDS_REMOVEDIR)
int removedir(const char* path);
#endif

#if defined(_CLineB__NEEDS_WRITE)
#include <LineCore/size_t.h>
ssize_t write(int fileno, const void* buf, size_t nbyte);
#endif

#if defined(_CLineB__NEEDS_REMOVE)
int remove(const char* filename);
#endif

#if defined(_CLineB__NEEDS_FSIZE)
#include <LineCore/size_t.h>
size_t fsize(int fileno);
#endif

#if defined(_CLineB__NEEDS_READ)
#include <LineCore/size_t.h>
ssize_t read(int fileno, void* buf, size_t count);
#endif

#if defined(_CLineB__NEEDS_LISTDIR)
#include <LineCore/size_t.h>
#include <LineKernel/contents_t.h>
int listdir(const char* path, contents_t* fcontents, size_t count);
#endif

#undef _CLineB__NEEDS_PREDEFINED_FILENO
#undef _CLineB__NEEDS_CLOSE
#undef _CLineB__NEEDS_OPEN
#undef _CLineB__NEEDS_RENAME
#undef _CLineB__NEEDS_MAKEDIR
#undef _CLineB__NEEDS_REMOVEDIR
#undef _CLineB__NEEDS_WRITE
#undef _CLineB__NEEDS_REMOVE
#undef _CLineB__NEEDS

#endif
