
#pragma once

#include <ExtendedEngine/State.h>


namespace spehs{ namespace audio{ class ActiveSoundSource; } class GameObject; }

class TestState : public extspehs::VisualState
{
public:
	TestState();
	~TestState();

	void init();
	bool update();

private:
	spehs::audio::ActiveSoundSource* sound;
	spehs::GameObject* object;
};

