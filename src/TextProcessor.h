/*
JuffEd - A simple text editor
Copyright 2007-2008 Mikhail Murzin

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License 
version 2 as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef _TEXT_PROCESSOR_H_
#define _TEXT_PROCESSOR_H_

class QTextEdit;

#include <QtCore/QObject>

class TextProcessor : public QObject {
Q_OBJECT
public:
	TextProcessor(QTextEdit*);

private slots:
	void textChangeEvent();
	void cursorMoveEvent();

private:
	QTextEdit* edit_;
	bool autoInsertion_;
	int lastRow_;
	int preLastRow_;
};

#endif
