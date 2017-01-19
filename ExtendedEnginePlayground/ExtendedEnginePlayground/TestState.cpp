
#include "TestState.h"

#include <SpehsEngine/SoundSource.h>
#include <SpehsEngine/InputManager.h>
#include <SpehsEngine/AudioManager.h>
#include <SpehsEngine/AudioEngine.h>


TestState::TestState()
{
}
TestState::~TestState()
{
	delete sound;
}

void TestState::init()
{
	sound = new spehs::audio::ActiveSoundSource;
	sound->setSound(spehs::AudioManager::instance->loadWAVE("test.wav"));
	sound->setPosition(glm::vec2(0.0f, 5.0f));
}

bool TestState::update()
{
	if (inputManager->isKeyPressed(KEYBOARD_RETURN))
	{
		sound->play();
	}

	return true;
}