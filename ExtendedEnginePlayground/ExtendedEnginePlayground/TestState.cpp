
#include "TestState.h"

#include <SpehsEngine/SoundSource.h>
#include <SpehsEngine/InputManager.h>
#include <SpehsEngine/AudioManager.h>
#include <SpehsEngine/AudioEngine.h>
#include <SpehsEngine/GameObject.h>
#include <SpehsEngine/AnimatedSprite.h>
#include <SpehsEngine/Transform2D.h>
#include <SpehsEngine/TextureManager.h>


TestState::TestState()
{
}
TestState::~TestState()
{
	delete sound;
}

void TestState::init()
{
	VisualState::init();

	sound = new spehs::audio::ActiveSoundSource;
	sound->setSound(spehs::AudioManager::instance->loadWAVE("test.wav"));
	sound->setPosition(glm::vec2(0.0f, 5.0f));

	object = new spehs::GameObject();
	object->addComponent<spehs::Transform2D>();
	object->addComponent<spehs::AnimatedSprite>();
	object->getComponent<spehs::AnimatedSprite>()->setTextureID(textureManager->preloadTexture("test.png"));
	object->getComponent<spehs::AnimatedSprite>()->setAnimation(glm::ivec2(30, 30), 2, 2, 4);
}

bool TestState::update()
{
	if (inputManager->isKeyPressed(KEYBOARD_RETURN))
	{
		sound->play();
	}

	object->update();

	return true;
}