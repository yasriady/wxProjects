#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Linux64-Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/845702274/jsonreader.o \
	${OBJECTDIR}/_ext/845702274/jsonval.o \
	${OBJECTDIR}/_ext/845702274/jsonwriter.o \
	${OBJECTDIR}/_ext/143502089/fnb_customize_dlg.o \
	${OBJECTDIR}/_ext/143502089/fnb_resources.o \
	${OBJECTDIR}/_ext/143502089/popup_dlg.o \
	${OBJECTDIR}/_ext/143502089/renderer.o \
	${OBJECTDIR}/_ext/143502089/wxFlatNotebook.o \
	${OBJECTDIR}/_ext/143502089/xh_fnb.o \
	${OBJECTDIR}/_ext/2025620298/sqlite3.o \
	${OBJECTDIR}/_ext/618582562/wxsqlite3.o \
	${OBJECTDIR}/_ext/336017664/ArtProvider.o \
	${OBJECTDIR}/_ext/317146128/precomp.o \
	${OBJECTDIR}/_ext/317146128/toggle.o \
	${OBJECTDIR}/_ext/446454478/wxMozillaLikeAboutBoxDialog.o \
	${OBJECTDIR}/_ext/302064/CustomButton.o \
	${OBJECTDIR}/_ext/1873068826/ComboPanel.o \
	${OBJECTDIR}/_ext/1978438659/uiComboPanel.o \
	${OBJECTDIR}/_ext/1978438659/uiComboPanelA.o \
	${OBJECTDIR}/_ext/98977579/ComboVListBox.o \
	${OBJECTDIR}/_ext/1559590676/PopupVListBox.o \
	${OBJECTDIR}/_ext/265390006/DataViewCtrl.o \
	${OBJECTDIR}/_ext/389481313/DataViewColumn.o \
	${OBJECTDIR}/_ext/389481313/DataViewVirtualListModel.o \
	${OBJECTDIR}/_ext/1544246340/FlatNotebook.o \
	${OBJECTDIR}/_ext/326360057/ImagePicker.o \
	${OBJECTDIR}/_ext/147765232/uiImagePicker.o \
	${OBJECTDIR}/_ext/147765232/uiImagePickerA.o \
	${OBJECTDIR}/_ext/1176299872/Logger.o \
	${OBJECTDIR}/_ext/1845100937/uiLogger.o \
	${OBJECTDIR}/_ext/1845100937/uiLoggerA.o \
	${OBJECTDIR}/_ext/225153265/StatusBar.o \
	${OBJECTDIR}/_ext/198841321/TaskBarIcon.o \
	${OBJECTDIR}/_ext/166899399/VListBox.o \
	${OBJECTDIR}/_ext/1173907126/wxDialogB.o \
	${OBJECTDIR}/_ext/1723924321/dlg.o \
	${OBJECTDIR}/_ext/1723924321/dlgFieldEditor.o \
	${OBJECTDIR}/_ext/1723924321/dlgRecordEditor.o \
	${OBJECTDIR}/_ext/1723924321/dlgRecordManager.o \
	${OBJECTDIR}/_ext/1707087844/wxPanelB.o \
	${OBJECTDIR}/Base/Base.o \
	${OBJECTDIR}/Base/ClientData.o \
	${OBJECTDIR}/Base/MyConfig.o \
	${OBJECTDIR}/Base/MyUtils.o \
	${OBJECTDIR}/Base/classes/QueryData.o \
	${OBJECTDIR}/Base/wxBase/wxDataViewCtrlB.o \
	${OBJECTDIR}/Base/wxBase/wxDataViewVirtualListModelB.o \
	${OBJECTDIR}/Ctrl/ComboBox/ComboBox.o \
	${OBJECTDIR}/Ctrl/Control/Control.o \
	${OBJECTDIR}/DB/AppDB.o \
	${OBJECTDIR}/DB/Engines/DBBase.o \
	${OBJECTDIR}/DB/Engines/DBSQLite.o \
	${OBJECTDIR}/DB/Functions.o \
	${OBJECTDIR}/DB/Recordset.o \
	${OBJECTDIR}/JSON/MyJSON.o \
	${OBJECTDIR}/wx_pch.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=`./wx-config.my` 
CXXFLAGS=`./wx-config.my` 

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libddylib.wx.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libddylib.wx.a: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libddylib.wx.a
	${AR} -rv ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libddylib.wx.a ${OBJECTFILES} 
	$(RANLIB) ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libddylib.wx.a

${OBJECTDIR}/_ext/845702274/jsonreader.o: ../wxCodes/wxJSON-1.2.1/src/jsonreader.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/845702274
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/845702274/jsonreader.o ../wxCodes/wxJSON-1.2.1/src/jsonreader.cpp

${OBJECTDIR}/_ext/845702274/jsonval.o: ../wxCodes/wxJSON-1.2.1/src/jsonval.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/845702274
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/845702274/jsonval.o ../wxCodes/wxJSON-1.2.1/src/jsonval.cpp

${OBJECTDIR}/_ext/845702274/jsonwriter.o: ../wxCodes/wxJSON-1.2.1/src/jsonwriter.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/845702274
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/845702274/jsonwriter.o ../wxCodes/wxJSON-1.2.1/src/jsonwriter.cpp

${OBJECTDIR}/_ext/143502089/fnb_customize_dlg.o: ../wxCodes/wxflatnotebook/contrib/src/wxFlatNotebook/fnb_customize_dlg.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/143502089
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/143502089/fnb_customize_dlg.o ../wxCodes/wxflatnotebook/contrib/src/wxFlatNotebook/fnb_customize_dlg.cpp

${OBJECTDIR}/_ext/143502089/fnb_resources.o: ../wxCodes/wxflatnotebook/contrib/src/wxFlatNotebook/fnb_resources.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/143502089
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/143502089/fnb_resources.o ../wxCodes/wxflatnotebook/contrib/src/wxFlatNotebook/fnb_resources.cpp

${OBJECTDIR}/_ext/143502089/popup_dlg.o: ../wxCodes/wxflatnotebook/contrib/src/wxFlatNotebook/popup_dlg.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/143502089
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/143502089/popup_dlg.o ../wxCodes/wxflatnotebook/contrib/src/wxFlatNotebook/popup_dlg.cpp

${OBJECTDIR}/_ext/143502089/renderer.o: ../wxCodes/wxflatnotebook/contrib/src/wxFlatNotebook/renderer.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/143502089
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/143502089/renderer.o ../wxCodes/wxflatnotebook/contrib/src/wxFlatNotebook/renderer.cpp

${OBJECTDIR}/_ext/143502089/wxFlatNotebook.o: ../wxCodes/wxflatnotebook/contrib/src/wxFlatNotebook/wxFlatNotebook.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/143502089
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/143502089/wxFlatNotebook.o ../wxCodes/wxflatnotebook/contrib/src/wxFlatNotebook/wxFlatNotebook.cpp

${OBJECTDIR}/_ext/143502089/xh_fnb.o: ../wxCodes/wxflatnotebook/contrib/src/wxFlatNotebook/xh_fnb.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/143502089
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/143502089/xh_fnb.o ../wxCodes/wxflatnotebook/contrib/src/wxFlatNotebook/xh_fnb.cpp

${OBJECTDIR}/_ext/2025620298/sqlite3.o: ../wxCodes/wxsqlite3/sqlite3/secure/src/sqlite3.c 
	${MKDIR} -p ${OBJECTDIR}/_ext/2025620298
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2025620298/sqlite3.o ../wxCodes/wxsqlite3/sqlite3/secure/src/sqlite3.c

${OBJECTDIR}/_ext/618582562/wxsqlite3.o: ../wxCodes/wxsqlite3/src/wxsqlite3.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/618582562
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/618582562/wxsqlite3.o ../wxCodes/wxsqlite3/src/wxsqlite3.cpp

${OBJECTDIR}/_ext/336017664/ArtProvider.o: /opt/wxWidgets/wxProjects/DdyLib.wx/ArtProvider/ArtProvider.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/336017664
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/336017664/ArtProvider.o /opt/wxWidgets/wxProjects/DdyLib.wx/ArtProvider/ArtProvider.cpp

${OBJECTDIR}/_ext/317146128/precomp.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Contrib/wxthings/precomp.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/317146128
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/317146128/precomp.o /opt/wxWidgets/wxProjects/DdyLib.wx/Contrib/wxthings/precomp.cpp

${OBJECTDIR}/_ext/317146128/toggle.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Contrib/wxthings/toggle.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/317146128
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/317146128/toggle.o /opt/wxWidgets/wxProjects/DdyLib.wx/Contrib/wxthings/toggle.cpp

${OBJECTDIR}/_ext/446454478/wxMozillaLikeAboutBoxDialog.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/AboutBox/wxMozillaLikeAboutBoxDialog.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/446454478
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/446454478/wxMozillaLikeAboutBoxDialog.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/AboutBox/wxMozillaLikeAboutBoxDialog.cpp

${OBJECTDIR}/_ext/302064/CustomButton.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/Button/CustomButton/CustomButton.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/302064
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/302064/CustomButton.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/Button/CustomButton/CustomButton.cpp

${OBJECTDIR}/_ext/1873068826/ComboPanel.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ComboPanel/ComboPanel.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1873068826
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1873068826/ComboPanel.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ComboPanel/ComboPanel.cpp

${OBJECTDIR}/_ext/1978438659/uiComboPanel.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ComboPanel/classes/uiComboPanel.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1978438659
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1978438659/uiComboPanel.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ComboPanel/classes/uiComboPanel.cpp

${OBJECTDIR}/_ext/1978438659/uiComboPanelA.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ComboPanel/classes/uiComboPanelA.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1978438659
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1978438659/uiComboPanelA.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ComboPanel/classes/uiComboPanelA.cpp

${OBJECTDIR}/_ext/98977579/ComboVListBox.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ComboVListBox/ComboVListBox.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/98977579
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/98977579/ComboVListBox.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ComboVListBox/ComboVListBox.cpp

${OBJECTDIR}/_ext/1559590676/PopupVListBox.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ComboVListBox/classes/PopupVListBox.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1559590676
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1559590676/PopupVListBox.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ComboVListBox/classes/PopupVListBox.cpp

${OBJECTDIR}/_ext/265390006/DataViewCtrl.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/DataViewCtrl/DataViewCtrl.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/265390006
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/265390006/DataViewCtrl.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/DataViewCtrl/DataViewCtrl.cpp

${OBJECTDIR}/_ext/389481313/DataViewColumn.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/DataViewCtrl/classes/DataViewColumn.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/389481313
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/389481313/DataViewColumn.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/DataViewCtrl/classes/DataViewColumn.cpp

${OBJECTDIR}/_ext/389481313/DataViewVirtualListModel.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/DataViewCtrl/classes/DataViewVirtualListModel.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/389481313
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/389481313/DataViewVirtualListModel.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/DataViewCtrl/classes/DataViewVirtualListModel.cpp

${OBJECTDIR}/_ext/1544246340/FlatNotebook.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/FlatNotebook/FlatNotebook.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1544246340
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1544246340/FlatNotebook.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/FlatNotebook/FlatNotebook.cpp

${OBJECTDIR}/_ext/326360057/ImagePicker.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ImagePicker/ImagePicker.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/326360057
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/326360057/ImagePicker.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ImagePicker/ImagePicker.cpp

${OBJECTDIR}/_ext/147765232/uiImagePicker.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ImagePicker/classes/uiImagePicker.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/147765232
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/147765232/uiImagePicker.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ImagePicker/classes/uiImagePicker.cpp

${OBJECTDIR}/_ext/147765232/uiImagePickerA.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ImagePicker/classes/uiImagePickerA.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/147765232
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/147765232/uiImagePickerA.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/ImagePicker/classes/uiImagePickerA.cpp

${OBJECTDIR}/_ext/1176299872/Logger.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/Logger/Logger.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1176299872
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1176299872/Logger.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/Logger/Logger.cpp

${OBJECTDIR}/_ext/1845100937/uiLogger.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/Logger/classes/uiLogger.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1845100937
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1845100937/uiLogger.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/Logger/classes/uiLogger.cpp

${OBJECTDIR}/_ext/1845100937/uiLoggerA.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/Logger/classes/uiLoggerA.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1845100937
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1845100937/uiLoggerA.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/Logger/classes/uiLoggerA.cpp

${OBJECTDIR}/_ext/225153265/StatusBar.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/StatusBar/StatusBar.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/225153265
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/225153265/StatusBar.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/StatusBar/StatusBar.cpp

${OBJECTDIR}/_ext/198841321/TaskBarIcon.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/TaskBarIcon/TaskBarIcon.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/198841321
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/198841321/TaskBarIcon.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/TaskBarIcon/TaskBarIcon.cpp

${OBJECTDIR}/_ext/166899399/VListBox.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/VListBox/VListBox.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/166899399
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/166899399/VListBox.o /opt/wxWidgets/wxProjects/DdyLib.wx/Ctrl/VListBox/VListBox.cpp

${OBJECTDIR}/_ext/1173907126/wxDialogB.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Form/Dialog/classes/wxDialogB.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1173907126
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1173907126/wxDialogB.o /opt/wxWidgets/wxProjects/DdyLib.wx/Form/Dialog/classes/wxDialogB.cpp

${OBJECTDIR}/_ext/1723924321/dlg.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Form/Dialog/dlg.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1723924321
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1723924321/dlg.o /opt/wxWidgets/wxProjects/DdyLib.wx/Form/Dialog/dlg.cpp

${OBJECTDIR}/_ext/1723924321/dlgFieldEditor.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Form/Dialog/dlgFieldEditor.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1723924321
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1723924321/dlgFieldEditor.o /opt/wxWidgets/wxProjects/DdyLib.wx/Form/Dialog/dlgFieldEditor.cpp

${OBJECTDIR}/_ext/1723924321/dlgRecordEditor.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Form/Dialog/dlgRecordEditor.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1723924321
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1723924321/dlgRecordEditor.o /opt/wxWidgets/wxProjects/DdyLib.wx/Form/Dialog/dlgRecordEditor.cpp

${OBJECTDIR}/_ext/1723924321/dlgRecordManager.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Form/Dialog/dlgRecordManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1723924321
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1723924321/dlgRecordManager.o /opt/wxWidgets/wxProjects/DdyLib.wx/Form/Dialog/dlgRecordManager.cpp

${OBJECTDIR}/_ext/1707087844/wxPanelB.o: /opt/wxWidgets/wxProjects/DdyLib.wx/Form/Panel/classes/wxPanelB.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1707087844
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1707087844/wxPanelB.o /opt/wxWidgets/wxProjects/DdyLib.wx/Form/Panel/classes/wxPanelB.cpp

${OBJECTDIR}/Base/Base.o: Base/Base.cpp 
	${MKDIR} -p ${OBJECTDIR}/Base
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Base/Base.o Base/Base.cpp

${OBJECTDIR}/Base/ClientData.o: Base/ClientData.cpp 
	${MKDIR} -p ${OBJECTDIR}/Base
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Base/ClientData.o Base/ClientData.cpp

${OBJECTDIR}/Base/MyConfig.o: Base/MyConfig.cpp 
	${MKDIR} -p ${OBJECTDIR}/Base
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Base/MyConfig.o Base/MyConfig.cpp

${OBJECTDIR}/Base/MyUtils.o: Base/MyUtils.cpp 
	${MKDIR} -p ${OBJECTDIR}/Base
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Base/MyUtils.o Base/MyUtils.cpp

${OBJECTDIR}/Base/classes/QueryData.o: Base/classes/QueryData.cpp 
	${MKDIR} -p ${OBJECTDIR}/Base/classes
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Base/classes/QueryData.o Base/classes/QueryData.cpp

${OBJECTDIR}/Base/wxBase/wxDataViewCtrlB.o: Base/wxBase/wxDataViewCtrlB.cpp 
	${MKDIR} -p ${OBJECTDIR}/Base/wxBase
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Base/wxBase/wxDataViewCtrlB.o Base/wxBase/wxDataViewCtrlB.cpp

${OBJECTDIR}/Base/wxBase/wxDataViewVirtualListModelB.o: Base/wxBase/wxDataViewVirtualListModelB.cpp 
	${MKDIR} -p ${OBJECTDIR}/Base/wxBase
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Base/wxBase/wxDataViewVirtualListModelB.o Base/wxBase/wxDataViewVirtualListModelB.cpp

${OBJECTDIR}/Ctrl/ComboBox/ComboBox.o: Ctrl/ComboBox/ComboBox.cpp 
	${MKDIR} -p ${OBJECTDIR}/Ctrl/ComboBox
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ctrl/ComboBox/ComboBox.o Ctrl/ComboBox/ComboBox.cpp

${OBJECTDIR}/Ctrl/Control/Control.o: Ctrl/Control/Control.cpp 
	${MKDIR} -p ${OBJECTDIR}/Ctrl/Control
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ctrl/Control/Control.o Ctrl/Control/Control.cpp

${OBJECTDIR}/DB/AppDB.o: DB/AppDB.cpp 
	${MKDIR} -p ${OBJECTDIR}/DB
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DB/AppDB.o DB/AppDB.cpp

${OBJECTDIR}/DB/Engines/DBBase.o: DB/Engines/DBBase.cpp 
	${MKDIR} -p ${OBJECTDIR}/DB/Engines
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DB/Engines/DBBase.o DB/Engines/DBBase.cpp

${OBJECTDIR}/DB/Engines/DBSQLite.o: DB/Engines/DBSQLite.cpp 
	${MKDIR} -p ${OBJECTDIR}/DB/Engines
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DB/Engines/DBSQLite.o DB/Engines/DBSQLite.cpp

${OBJECTDIR}/DB/Functions.o: DB/Functions.cpp 
	${MKDIR} -p ${OBJECTDIR}/DB
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DB/Functions.o DB/Functions.cpp

${OBJECTDIR}/DB/Recordset.o: DB/Recordset.cpp 
	${MKDIR} -p ${OBJECTDIR}/DB
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DB/Recordset.o DB/Recordset.cpp

${OBJECTDIR}/JSON/MyJSON.o: JSON/MyJSON.cpp 
	${MKDIR} -p ${OBJECTDIR}/JSON
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/JSON/MyJSON.o JSON/MyJSON.cpp

${OBJECTDIR}/wx_pch.o: wx_pch.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/wx_pch.o wx_pch.cpp

${OBJECTDIR}/wx_pch.h.gch: wx_pch.h 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../wxCodes/wxflatnotebook/contrib/include -I../wxCodes/wxJSON-1.2.1/include -MMD -MP -MF "$@.d" -o "$@" wx_pch.h

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libddylib.wx.a

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
