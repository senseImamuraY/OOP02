#pragma once
#include "VECTOR2.h"
class Actor
{
public:
	enum State
	{
		EActive, EPause, EDead
	};

	Actor(class Game* game);
	// 基底クラスのポインタを通じて派生クラスのオブジェクトを破棄する際に、
	// 適切な派生クラスのデストラクタが呼び出されるようにするためvirtualを
	// デストラクタに付ける
	virtual ~Actor();
	void Update();
	virtual void UpdateActor() {};

	//Getters,Setters
	State GetState() const { return mState; }
	void SetState(State state) { mState = state; }

	const VECTOR2& GetPosition() const { return mPosition; }
	void SetPosition(const VECTOR2& pos) { mPosition = pos; }
	float GetRotation() const { return mRotation; }
	void SetRotation(float rotation) { mRotation = rotation; }
	float GetScale() const { return mScale; }
	void SetScale(float scale) { mScale = scale; }

	class Game* GetGame() { return mGame; }
private:
	//Actorの状態
	State mState;
	//トランスフォーム
	VECTOR2 mPosition;
	float mRotation;
	float mScale;
	//Gameクラスのpublicメンバにアクセスするポインタ
	// これがあることでシングルトンを使用しなくても良くなる（依存性の注入）
	class Game* mGame;
};

