/****************************************************************************
**
** Copyright (C) 2017 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the Qt Quick Templates 2 module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL3$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QQUICKDIALOGBUTTONBOX_P_P_H
#define QQUICKDIALOGBUTTONBOX_P_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <QtQuickTemplates2/private/qquickcontainer_p_p.h>
#include <QtQuickTemplates2/private/qquickdialogbuttonbox_p.h>

QT_BEGIN_NAMESPACE

class QQuickDialogButtonBoxPrivate : public QQuickContainerPrivate
{
    Q_DECLARE_PUBLIC(QQuickDialogButtonBox)

public:
    QQuickDialogButtonBoxPrivate();

    static QQuickDialogButtonBoxPrivate *get(QQuickDialogButtonBox *box)
    {
        return box->d_func();
    }

    void itemImplicitWidthChanged(QQuickItem *item) override;
    void itemImplicitHeightChanged(QQuickItem *item) override;

    void resizeContent() override;
    void updateLayout();
    void handleClick();

    QQuickAbstractButton *createStandardButton(QPlatformDialogHelper::StandardButton button);
    void removeStandardButtons();

    Qt::Alignment alignment;
    QQuickDialogButtonBox::Position position;
    QPlatformDialogHelper::StandardButtons standardButtons;
    QQmlComponent *delegate;
};

class QQuickDialogButtonBoxAttachedPrivate : public QObjectPrivate
{
    Q_DECLARE_PUBLIC(QQuickDialogButtonBoxAttached)

public:
    QQuickDialogButtonBoxAttachedPrivate() : buttonBox(nullptr),
        buttonRole(QPlatformDialogHelper::InvalidRole),
        standardButton(QPlatformDialogHelper::NoButton) { }

    static QQuickDialogButtonBoxAttachedPrivate *get(QQuickDialogButtonBoxAttached *q)
    {
        return q->d_func();
    }

    void setButtonBox(QQuickDialogButtonBox *box);

    QQuickDialogButtonBox *buttonBox;
    QPlatformDialogHelper::ButtonRole buttonRole;
    QPlatformDialogHelper::StandardButton standardButton;
};

QT_END_NAMESPACE

#endif // QQUICKDIALOGBUTTONBOX_P_P_H
