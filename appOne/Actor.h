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
	// ���N���X�̃|�C���^��ʂ��Ĕh���N���X�̃I�u�W�F�N�g��j������ۂɁA
	// �K�؂Ȕh���N���X�̃f�X�g���N�^���Ăяo�����悤�ɂ��邽��virtual��
	// �f�X�g���N�^�ɕt����
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
	//Actor�̏��
	State mState;
	//�g�����X�t�H�[��
	VECTOR2 mPosition;
	float mRotation;
	float mScale;
	//Game�N���X��public�����o�ɃA�N�Z�X����|�C���^
	// ���ꂪ���邱�ƂŃV���O���g�����g�p���Ȃ��Ă��ǂ��Ȃ�i�ˑ����̒����j
	class Game* mGame;
};

