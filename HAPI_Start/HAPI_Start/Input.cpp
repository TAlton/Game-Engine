#include "Input.h"

const char Input::GetKBInput() const {

	const static HAPI_TKeyboardData& kbData = HAPI.GetKeyboardData();

	if (kbData.scanCode[HK_SPACE]) return HK_SPACE;
	if (kbData.scanCode['W']) return 'W';
	if (kbData.scanCode['D']) return 'D';
	if (kbData.scanCode['A']) return 'A';
	if (kbData.scanCode['E']) return 'E';

	return '\0';
	
}
