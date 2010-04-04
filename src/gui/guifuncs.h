#ifndef GUIFUNCS_H
#define GUIFUNCS_H

#include <stdbool.h>

#include "../types.h"

u4*  horizon_get(u4 distance);
void CheatCodeLoad(void);
void CheatCodeSave(void);
void GUILoadData(void);
void GUIQuickLoadUpdate(void);
void GUISaveVars(void);
void GetLoadData(void);
bool Keep43Check(void);
void LoadCheatSearchFile(void);
void SaveCheatSearchFile(void);
void SetMovieForcedLength(void);
void dumpsound(void);
void loadquickfname(u1 slot);

#ifndef __MSDOS__
void GetCustomXY(void);
void SetCustomXY(void);

extern char GUICustomX[5];
extern char GUICustomY[5];
#endif

extern char** d_names;              // Directory Names
extern char** selected_names;       // Used to point to requested one
extern s4     GUIcurrentcursloc;    // current cursor position (GUI)
extern s4     GUIcurrentdircursloc; // current dir position (GUI)
extern s4     GUIcurrentdirviewloc; // current directory position
extern s4     GUIcurrentviewloc;    // current file position
extern s4     GUIdirentries;
extern s4     GUIfileentries;
extern u4     GUIcurrentfilewin;

#endif
