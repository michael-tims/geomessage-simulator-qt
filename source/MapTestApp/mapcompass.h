/*******************************************************************************
 * Copyright 2012-2013 Esri
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 ******************************************************************************/

#ifndef MAPCOMPASS_H
#define MAPCOMPASS_H

#include <QGraphicsWidget>
#include <QGraphicsView>

#include "MapGraphicsView.h"

class MapCompass : public QGraphicsWidget
{
    Q_OBJECT
public:
    MapCompass(QGraphicsItem *parent = 0);

    void setGraphicsView(EsriRuntimeQt::MapGraphicsView* pGraphicView);
    QSize sizeHint() const;
    void UpdateRotation(double);
    void setScale(double);

signals:

public slots:

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    QImage image;
    double rotateValue;
    double scaleValue;

    EsriRuntimeQt::MapGraphicsView* m_pMapGraphicsView;
};

#endif // MAPCOMPASS_H
