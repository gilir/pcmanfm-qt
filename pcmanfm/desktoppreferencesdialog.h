/*

    Copyright (C) 2013  Hong Jen Yee (PCMan) <pcman.tw@gmail.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/


#ifndef PCMANFM_DESKTOPPREFERENCESDIALOG_H
#define PCMANFM_DESKTOPPREFERENCESDIALOG_H

#include <QDialog>
#include "ui_desktop-preferences.h"

namespace PCManFM {

class DesktopPreferencesDialog : public QDialog {
Q_OBJECT

public:
  explicit DesktopPreferencesDialog(QWidget* parent = 0, Qt::WindowFlags f = 0);
  virtual ~DesktopPreferencesDialog();

  virtual void accept();

  void selectPage(QString name);

protected Q_SLOTS:
  void onApplyClicked();
  void onWallpaperModeChanged(int index);
  void onBrowseClicked();
  void onBrowseDesktopFolderClicked();

  void applySettings();

private:
  Ui::DesktopPreferencesDialog ui;
};

}

#endif // PCMANFM_DESKTOPPREFERENCESDIALOG_H
