
#include <ExtendedEngine/ApplicationManager.h>

#include "TestState.h"

#include <string>


int main()
{
	extspehs::ApplicationManager::init("Test", new TestState);
	extspehs::ApplicationManager::uninit();
	return 0;
}