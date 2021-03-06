/*
 * Copyright (C) 2013 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "aalvideorenderercontrol.h"
#include "aalcameraservice.h"


AalVideoRendererControl::AalVideoRendererControl(AalCameraService *service, QObject *parent)
   : QVideoRendererControl(parent)
   , m_surface(0),
     m_service(service),
     m_viewFinderRunning(false),
     m_textureId(0)
{
}

AalVideoRendererControl::~AalVideoRendererControl()
{
}

QAbstractVideoSurface *AalVideoRendererControl::surface() const
{
    return m_surface;
}

void AalVideoRendererControl::setSurface(QAbstractVideoSurface *surface)
{
    Q_UNUSED(surface);
}

void AalVideoRendererControl::init(CameraControl *control, CameraControlListener *listener)
{
    Q_UNUSED(control);
    Q_UNUSED(listener);
}

void AalVideoRendererControl::startPreview()
{
}

void AalVideoRendererControl::stopPreview()
{
}

bool AalVideoRendererControl::isPreviewStarted() const
{
    return true;
}

void AalVideoRendererControl::updateViewfinderFrame()
{
}

void AalVideoRendererControl::onTextureCreated(unsigned int textureID)
{
    Q_UNUSED(textureID);
}

void AalVideoRendererControl::onSnapshotTaken(QImage snapshotImage)
{
    Q_UNUSED(snapshotImage);
}
