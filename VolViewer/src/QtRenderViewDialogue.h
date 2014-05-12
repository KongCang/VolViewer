/*
 *   Copyright 2009 Jerome Avondo. All rights reserved.
 *   Use is subject to license terms supplied in LICENSE.txt
 */
#ifndef QTRENVIEWEDITOR_H
#define QTRENVIEWEDITOR_H

#include <q3tabdialog.h> 
#include <qpainter.h>
#include <qlabel.h>

#include "QtRenderViewWidget.h"

class QtRenderViewDialogue: public Q3TabDialog
{
	 Q_OBJECT

public:	
	//pointer to our main window
	QtRenderViewWidget* renviewtab;

	QtRenderViewDialogue(QWidget * parent=0, const char * name=0, bool modal=FALSE, Qt::WFlags f=0);
	~QtRenderViewDialogue();
	
	void reset(void);
	void build_layout(void);
	void rebuild_tabs(void);

private slots:
	void undo_event(void);
	void close_event(void);
	void reload_event(void);
	void apply_event(void);

signals:
	void undo_signal(void);
	void close_signal(void);
	void reload_signal(void);
	void filter_signal(void);
};

#endif // QTFILTEDITOR_H