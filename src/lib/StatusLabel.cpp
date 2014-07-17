/*
JuffEd - An advanced text editor
Copyright 2007-2010 Mikhail Murzin

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License 
version 2 as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include "StatusLabel.h"

#include <QMenu>
#include <QMouseEvent>

namespace Juff {

StatusLabel::StatusLabel(const QString& text) : QLabel(text) {
	menu_ = NULL;
	setFrameStyle(QFrame::Panel | QFrame::Sunken);
}

void StatusLabel::setMenu(QMenu* menu) {
	menu_ = menu;
}

void StatusLabel::mouseReleaseEvent(QMouseEvent* e) {
	if ( NULL != menu_ ) {
		menu_->exec(e->globalPos());
	}
	else {
		emit clicked();
	}
}

};	//	namespace Juff
