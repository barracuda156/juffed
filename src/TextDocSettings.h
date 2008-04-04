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

#ifndef _TEXT_DOC_SETTINGS_H_
#define _TEXT_DOC_SETTINGS_H_

#include "Settings.h"

#include <QtGui/QFont>

class TextDocSettings : public Settings {
public:
	static QFont font() { return QFont(Settings::value("editor", "fontFamily").toString(), Settings::value("editor", "fontSize").toInt()); }
	static int tabStopWidth() { return Settings::value("editor", "tabStopWidth").toInt(); }
	static bool widthAdjust() { return Settings::value("editor", "widthAdjust").toBool(); }
	static bool showLineNumbers() { return Settings::value("editor", "showLineNumbers").toBool(); }
	static int lineLengthIndicator() { return Settings::value("editor", "lineLengthIndicator").toInt(); }
	
	static void setFont(const QFont& font) { Settings::setValue("editor", "fontFamily", font.family()); Settings::setValue("editor", "fontSize", font.pointSize()); }
	static void setWidthAdjust(bool adj) { Settings::setValue("editor", "widthAdjust", adj); }
	static void setShowLineNumbers(bool show) { Settings::setValue("editor", "showLineNumbers", show); }
	static void setTabStopWidth(int w) { Settings::setValue("editor", "tabStopWidth", w); }
	static void setLineLengthIndicator(int ind) { Settings::setValue("editor", "lineLengthIndicator", ind); }
};

#endif
