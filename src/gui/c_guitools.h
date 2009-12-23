#ifndef C_GUITOOLS_H
#define C_GUITOOLS_H

#include "../types.h"

char const* GUIOutputString(u1* dst, char const* text);
void GUIOuttext(u4 x, u4 y, char const* text, u1 colour);
void GUIDrawBox(u1* dst, u4 w, u4 h, u1 colour);
void GUIBox(u4 x1, u4 y1, u4 x2, u4 y2, u1 colour);
void GUIHLine(s4 x1, s4 x2, s4 y, u1 colour);
void GUIShadow(u4 x1, u4 y1, u4 x2, u4 y2);
void GUIDrawShadow2(u1* buf, u4 w, u4 h);
void GUIOutputStringwin(s4 x, u1* dst, char const* text);
void GUIOutputStringwinl(s4 x, u1* dst, char const* text);
void OutputUnder(s4, u1* y);
void GUIOuttextwin(u4 x, u4 y, char const* text);
void GUIoutputiconwin(s4 x, u4 y, u1 const* src);
void DrawSlideBarWin(u4 win_id, u4 x, u4 y, u4 list_loc, u4 list_size, u4 screen_size, u4 bar_size, u4* bar_dims);

#endif