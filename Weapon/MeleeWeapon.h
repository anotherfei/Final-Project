//
// Created by User on 30/05/2025.
//

#ifndef MELEEWEAPON_H
#define MELEEWEAPON_H

#include <iostream>
#include "Engine/GameEngine.hpp"
#include "Scene/PlayScene.hpp"
#include "Player/Player.h"
#include "Player/MeleePlayer.hpp"

class MeleeWeapon : public Engine::Sprite {
protected:
    PlayScene *Play;
    Player *player;
    const float RotationRate;
    bool flipped;
    const float speed;
    bool isRotating;
    bool effectPlayed = false;

    float rotationProgress;
    float cooldown;
    float damage;
public:
    MeleeWeapon(std::string img, float x, float y, float Rr,Player *player, float speed, float damage);
    void Update(float deltaTime) override;
    void Draw() const override;
    virtual void RotateAnimation(float deltaTime);
    virtual void CheckHitEnemies(Player *player);
};

#endif