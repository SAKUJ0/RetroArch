/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2012 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2012 - Daniel De Matteis
 * 
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef RARCH_ROM_EXT_H__
#define RARCH_ROM_EXT_H__

void rarch_console_load_game_wrap(const char *path, unsigned delay);

// Get rom extensions for current library.
// Returns NULL if library doesn't have any preferences in particular.
const char *rarch_console_get_rom_ext(void);

// Transforms a library id to a name suitable as a pathname.
void rarch_console_name_from_id(char *name, size_t size);

#endif
