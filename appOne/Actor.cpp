#include "Actor.h"

// ���������X�g���g�p���Ă���
Actor::Actor(Game* game)
	: mGame(game)
	, mState(EActive)
{
}

Actor::~Actor()
{
}

void Actor::Update()
{
	if (mState == EActive)
	{
		UpdateActor();
	}
}
