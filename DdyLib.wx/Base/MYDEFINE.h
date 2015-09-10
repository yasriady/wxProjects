/*
 * MYDEFINE.h
 *
 *  Created on: Feb 3, 2015
 *      Author: dedy
 */

#ifndef MYDEFINE_H_
#define MYDEFINE_H_

//#define LOGFUNCT(msg)					wxLogMessage(__PRETTY_FUNCTION__, msg);
#define LOGFUNCT(msg)					wxLogMessage( wxString::Format("%s ==> %s", __PRETTY_FUNCTION__, msg ) );
#define PF								wxLogMessage(__PRETTY_FUNCTION__);
//#define LOG(msg)						wxLogMessage(msg);
#define CLSNAME							GetClassInfo()->GetClassName()

#define SHOWMODAL(class, parent)	class *dlg = new class(parent); dlg->ShowModal();

#endif /* MYDEFINE_H_ */
