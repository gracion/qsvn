/***************************************************************************
 *   This file is part of QSvn Project http://qsvn.berlios.de              *
 *   Copyright (c) 2004-2005 Andreas Richter <ar@oszine.de>                *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License Version 2        *
 *   as published by the Free Software Foundation.                         *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                         *
 ***************************************************************************/


#ifndef FILESELECTOR_H
#define FILESELECTOR_H


//QSvn
#include "ui_fileselector.h"
#include "filelistmodel.h"


class FileSelector : public QDialog, public Ui::FileSelector
{
    Q_OBJECT

public:
    FileSelector( QWidget *parent, FileListModel::ModelFor modelFor );

    FileListModel *model();
    QStringList selectedFileList();
    QString logMessage();
private:
    FileListModel *m_fileListModel;

    void hideGroupBoxLogMessage();

private slots:
    void diff( const QModelIndex &index );
};

#endif