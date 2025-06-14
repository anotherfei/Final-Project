#ifndef BULLET_HPP
#define BULLET_HPP
#include <string>

#include "Engine/Sprite.hpp"
#include "Weapon/RangeWeapon.h"
#include "Enemy/Enemy.hpp"

class PlayScene;
namespace Engine {
    struct Point;
}   // namespace Engine

class Bullet : public Engine::Sprite {
protected:
    float speed;
    float damage;
    Sprite *parent;
    PlayScene *getPlayScene();
    virtual void OnExplode(Enemy *enemy);

public:
    Enemy *Target = nullptr;
    explicit Bullet(std::string img, float speed, float damage, Engine::Point position, Engine::Point forwardDirection, float rotation, Sprite *parent);
    void Update(float deltaTime) override;
    bool IsCollision(float x, float y);
    void Draw() const override;
};
#endif   // BULLET_HPP
