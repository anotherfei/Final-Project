//
// Created by Hsuan on 2024/4/10.
//

#ifndef INC_2025_I2P2_TOWERDEFENSE_WITH_ANSWER_STARTSCENE_H
#define INC_2025_I2P2_TOWERDEFENSE_WITH_ANSWER_STARTSCENE_H

#include <allegro5/allegro_audio.h>
#include <memory>

#include "Engine/IScene.hpp"
class StartScene final : public Engine::IScene {
public:
    bool isFull = true;
    explicit StartScene() = default;
    void Initialize() override;
    void Terminate() override;
    void PlayOnClick(int stage);
    void CreditOnClick(int stage);
    void TrophyOnClick(int stage);
    void SettingsOnClick(int stage);
    void DISPLAYonClick(int stage);
};
#endif   // INC_2025_I2P2_TOWERDEFENSE_WITH_ANSWER_STARTSCENE_H
