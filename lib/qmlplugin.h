/*
    Copyright (C) 2012  David Edmundson <kde@davidedmundson.co.uk>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/


#ifndef QML_PLUGIN_H
#define QML_PLUGIN_H

#include <QtDeclarative/QDeclarativeExtensionPlugin>

class QmlPlugin : public QDeclarativeExtensionPlugin
{
public:
    virtual void initializeEngine(QDeclarativeEngine *engine, const char *uri);
    virtual void registerTypes(const char *uri);
};

#endif // QML_PLUGIN_H
