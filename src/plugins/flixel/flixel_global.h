/*
 * Flixel Tiled Plugin
 * Copyright 2010, Jaderamiso <jaderamiso@gmail.com>
 * Copyright 2011, Stefan Beller <stefanbeller@googlemail.com>
 * Copyright 2013, Jameson Quave <jquave@gmail.com>
 *
 * This file is part of Tiled.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FLIXEL_GLOBAL_H
#define FLIXEL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(FLIXEL_LIBRARY)
#  define FLIXELSHARED_EXPORT Q_DECL_EXPORT
#else
#  define FLIXELSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // FLIXEL_GLOBAL_H
