#include <Windows.h>

class CoordinateTracker {

	HWND hRsWindow;
	RECT RsRect;
	POINT p;

public:
	bool FindRsWindow();
	void LaunchCT();
	void Execute();
	CoordinateTracker();

};


