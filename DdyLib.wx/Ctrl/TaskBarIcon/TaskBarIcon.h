/*
 * TaskBarIcon.h
 *
 *  Created on: Feb 2, 2015
 *      Author: dedy
 */

#ifndef TASKBARICON_H_
#define TASKBARICON_H_

#include <wx/taskbar.h>

class TaskBarIcon : public wxTaskBarIcon {
public:
	TaskBarIcon();
	virtual ~TaskBarIcon();
};

#endif /* TASKBARICON_H_ */
