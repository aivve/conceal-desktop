// Copyright (c) 2021 Conceal Network & Conceal Devs
//
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QFont>
#include <QLabel>
#include <QPushButton>

#include "Settings.h"

namespace WalletGui
{
  class EditableStyle
  {
  public:
    virtual ~EditableStyle();

    int baseFontSize;
    int baseTitleSize;
    int baseSmallButtonSize;
    int baseLargeButtonSize;
    int dialogTitleSize;

    QFont currentFont;
    QFont smallButtonFont;
    QFont largeButtonFont;
    QFont titleFont;
    QFont dialogTitleFont;

    QString tableStyle;
    QString b1Style;
    QString b2Style;
    QString fontStyle;
    QString darkFontStyle;
    QString orangeFontStyle;
    QString dialogTitleFontStyle;

    QList<QWidget *> widgets;
    QList<QPushButton *> buttons;
    QList<QLabel *> labels;

    virtual int setStyles(int change);
    virtual QList<QWidget *> getWidgets();
    virtual QList<QPushButton *> getButtons();
    virtual QList<QLabel *> getLabels();
    virtual void applyStyles();
  };
}  // namespace WalletGui
