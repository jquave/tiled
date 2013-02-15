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

#ifndef FLIXELPLUGIN_H
#define FLIXELPLUGIN_H

#include "flixel_global.h"

#include "mapwriterinterface.h"
#include "mapreaderinterface.h"

#include <QObject>
#include <QMap>

namespace Flixel {

class FLIXELSHARED_EXPORT FlixelPlugin
        : public QObject
        , public Tiled::MapWriterInterface
        , public Tiled::MapReaderInterface
{
    Q_OBJECT
    Q_INTERFACES(Tiled::MapWriterInterface)
    Q_INTERFACES(Tiled::MapReaderInterface)

#if QT_VERSION >= 0x050000
    Q_PLUGIN_METADATA(IID "org.mapeditor.MapWriterInterface" FILE "plugin.json")
#endif

public:
    FlixelPlugin();

    // MapReaderInterface
    Tiled::Map *read(const QString &fileName);
    bool supportsFile(const QString &fileName) const;

    // MapWriterInterface
    bool write(const Tiled::Map *map, const QString &fileName);
    QString nameFilter() const;
    QString errorString() const;

private:
    bool checkOneLayerWithName(const Tiled::Map *map, const QString &name);

    QString mError;
};

} // namespace Flixel

#endif // FLIXELPLUGIN_H
