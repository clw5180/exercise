#include "Practice 7.32 windowMgr.h"

CWindowMgr::CWindowMgr()
{
}


CWindowMgr::~CWindowMgr()
{
}

void CWindowMgr::clear(ScreenIndex i)
{
	if (i >= screens.size()) return;
	CScreen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}
