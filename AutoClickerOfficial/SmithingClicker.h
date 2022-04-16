#include <Windows.h>
#define RUNE_BARS_UNF_BOLTS 35
#define ADAM_BARS_UNF_BOLTS 30

class SmithingClicker {
	HWND hRsWindow;
	RECT RsRect;

public:
	bool FindRsWindow();
	void BoltsUnf();
	void BoltsUnf_advanced();
	void testing();

};