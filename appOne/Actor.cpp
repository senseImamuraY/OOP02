#include "Actor.h"

// 初期化リストを使用している
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
