# File generated by kdevelop's qmake manager. 
# ------------------------------------------- 
# Subdir relative project main directory: .
# Target is an application:  qsvn

MOC_DIR = .moc 
UI_DIR = .ui 
OBJECTS_DIR = .obj 
TARGET = qsvn 
DESTDIR = bin 
CONFIG += release \
          warn_on \
          qt \
          thread 
TEMPLATE = app 
FORMS += qsvndlg.ui \
         addworkingcopydlg.ui 
HEADERS += qsvn.h \
           addworkingcopy.h \
           svnclient.h 
SOURCES += main.cpp \
           qsvn.cpp \
           addworkingcopy.cpp \
           svnclient.cpp 
win32{
  MOC_DIR = moc
  OBJECTS_DIR = obj
  UI_DIR = ui
}
