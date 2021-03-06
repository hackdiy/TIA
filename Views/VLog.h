/*
 ____  __   __
(_  _)(  ) / _\
  )(   )( /    \
 (__) (__)\_/\_/

Copyright (C) 2014 tr4ceflow@gmail.com (http://blog.traceflow.com)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/
#ifndef VLOG_H
#define VLOG_H

#include "../Helpers/HStyle.h"

#include <QPlainTextEdit>

class VLog : public QPlainTextEdit
{
    Q_OBJECT
    HStyle* m_Style;
public:
    VLog(QWidget *parent=0);

    QSize sizeHint() const;
    void start();

public slots:
    void log(QString str, QString str2, QString col);
    void log(QString str);

signals:
    void onLogViewReady();
};

#endif // VLOG_H
