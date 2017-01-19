
#pragma once

#include <ExtendedEngine/State.h>


namespace spehs{ namespace audio{ class ActiveSoundSource; } }

class TestState : public extspehs::State
{
public:
	TestState();
	~TestState();

	void init();
	bool update();

private:
	spehs::audio::ActiveSoundSource* sound;
};

