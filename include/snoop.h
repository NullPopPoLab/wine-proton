/*
 * Definitions for inter-dll snooping
 *
 * Copyright 1998 Marcus Meissner
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __WINE_SNOOP_H
#define __WINE_SNOOP_H

#include "module.h"

extern void SNOOP_RegisterDLL(HMODULE,LPCSTR,DWORD,DWORD);
extern void SNOOP16_RegisterDLL(NE_MODULE*,LPCSTR);
extern FARPROC16 SNOOP16_GetProcAddress16(HMODULE16,DWORD,FARPROC16);
extern int SNOOP_ShowDebugmsgSnoop(const char *dll,int ord,const char *fname);
#endif
