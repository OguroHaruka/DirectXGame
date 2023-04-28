#include "Player.h"
#include <cassert>

void Player::Initialize(Model* model, uint32_t textureHandle) {
	assert(model);
	model_ = model;
	textureHandle_ = textureHandle;
	worldTransform_.Initialize();
	input_ = Input::GetInstance();
	//worldTransform_.scale_ = {5.0f, 1.0f, 1.0f};
	//Matrix4x4 matScale;
}

/* void Player::Update() { 
	worldTransform_.TransferMatrix(); 
	Vector3 move = {0, 0, 0};

	const float kCharacterSpeed = 0.2;
	if (input_->PushKey(DIK_LEFT)) {

		move.x -= kCharacterSpeed;
	} else if (input_->PushKey(DIK_RIGHT)) {
		move.x += kCharacterSpeed;
	} else if (input_->PushKey(DIK_UP)) {
		move.y -= kCharacterSpeed;
	} else if (input_->PushKey(DIK_DOWN)) {
		move.y += kCharacterSpeed;
	}

}*/

void Player::Draw(ViewProjection& viewProjection) {
	model_->Draw(worldTransform_, viewProjection, textureHandle_);
}