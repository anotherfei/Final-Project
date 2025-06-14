cmake_minimum_required(VERSION 3.27)
project(Final-Project)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)
include_directories(Resource)

file(COPY Resource/audios DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY Resource/fonts DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY Resource/images DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY Resource DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY allegro_monolith-5.2.dll DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(Final-Project
    Bullet/Bullet.cpp
    Bullet/Bullet.hpp
    Bullet/FireBullet.cpp
    Bullet/FireBullet.hpp

    Enemy/Enemy.cpp
    Enemy/Enemy.hpp
    Enemy/SoldierEnemy.cpp
    Enemy/SoldierEnemy.hpp

    Engine/Allegro5Exception.cpp
    Engine/Allegro5Exception.hpp
    Engine/AudioHelper.cpp
    Engine/AudioHelper.hpp
    Engine/Collider.cpp
    Engine/Collider.hpp
    Engine/GameEngine.cpp
    Engine/GameEngine.hpp
    Engine/Group.cpp
    Engine/Group.hpp
    Engine/IControl.cpp
    Engine/IControl.hpp
    Engine/IObject.cpp
    Engine/IObject.hpp
    Engine/IScene.cpp
    Engine/IScene.hpp
    Engine/LOG.cpp
    Engine/LOG.hpp
    Engine/Point.cpp
    Engine/Point.hpp
    Engine/Resources.cpp
    Engine/Resources.hpp
    Engine/Sprite.cpp
    Engine/Sprite.hpp
    
    Scene/LoseScene.cpp
    Scene/LoseScene.hpp
    Scene/PlayScene.cpp
    Scene/PlayScene.hpp
    Scene/StageSelectScene.cpp
    Scene/StageSelectScene.hpp
    Scene/StartScene.cpp
    Scene/StartScene.h
    Scene/WinScene.cpp
    Scene/WinScene.hpp
    Scene/SettingsScene.cpp
    Scene/SettingsScene.hpp
    Scene/LeaderboardScene.cpp
    Scene/LeaderboardScene.hpp
    Scene/ScoreboardScene.cpp
    Scene/ScoreboardScene.hpp

    UI/Animation/DirtyEffect.cpp
    UI/Animation/DirtyEffect.hpp
    UI/Animation/ExplosionEffect.cpp
    UI/Animation/ExplosionEffect.hpp
    UI/Animation/SlashEffect.cpp
    UI/Animation/SlashEffect.hpp
    UI/Animation/Plane.cpp
    UI/Animation/Plane.hpp
    UI/Animation/DamageText.cpp
    UI/Animation/DamageText.h

    UI/Component/Image.cpp
    UI/Component/Image.hpp
    UI/Component/ImageButton.cpp
    UI/Component/ImageButton.hpp
    UI/Component/Label.cpp
    UI/Component/Label.hpp
    UI/Component/Slider.cpp
    UI/Component/Slider.hpp

    Player/Player.cpp
    Player/Player.h
    Player/MeleePlayer.cpp
    Player/MeleePlayer.hpp
    Player/RangePlayer.cpp
    Player/RangePlayer.hpp
    Player/TankPlayerB.cpp
    Player/TankPlayerB.h
    Player/TankPlayerA.cpp
    Player/TankPlayerA.h

    main.cpp

    Weapon/MeleeWeapon.cpp
    Weapon/MeleeWeapon.h
    Weapon/RangeWeapon.cpp
    Weapon/RangeWeapon.h
    Weapon/LinkWeapon.cpp
    Weapon/LinkWeapon.h
    Weapon/LinkShield.cpp
    Weapon/LinkShield.h
    Weapon/MeleeShield.cpp
    Weapon/MeleeShield.h
    Weapon/BasicSword.cpp
    Weapon/BasicSword.h
    Weapon/BasicShield.cpp
    Weapon/BasicShield.h

    InteractiveBlock/Box.h
    InteractiveBlock/Box.cpp

    Enemy/EjojoEnemy.h
    Enemy/EjojoEnemy.cpp
    Enemy/FlyingEnemy.cpp
    Enemy/FlyingEnemy.h
    Enemy/FlyingDemon.cpp
    Enemy/FlyingDemon.h
    Enemy/MiniEjojo.cpp
    Enemy/MiniEjojo.h
    EnemyBullet/EnemyBullet.cpp
    EnemyBullet/EnemyBullet.h
    EnemyBullet/EnemyFireBullet.cpp
    EnemyBullet/EnemyFireBullet.h
    UI/Animation/LightEffect.cpp
    UI/Animation/LightEffect.h
    InteractiveBlock/Sensor.cpp
    InteractiveBlock/Sensor.h
    Player/MazePlayerA.cpp
    Player/MazePlayerA.h
    Player/MazePlayerB.cpp
    Player/MazePlayerB.h
    InteractiveBlock/Door.cpp
    InteractiveBlock/Door.h
    InteractiveBlock/Buton.cpp
    InteractiveBlock/Buton.h
    InteractiveBlock/Portal.cpp
    InteractiveBlock/Portal.h
    Scene/CutScene.cpp
    Scene/CutScene.h
    Scene/SelectProfileScene.cpp
    Scene/SelectProfileScene.h
    Enemy/SwordSkelly.cpp
    Enemy/SwordSkelly.h
    Enemy/ArcherSkelly.cpp
    Enemy/ArcherSkelly.h
    EnemyBullet/ArrowBullet.cpp
    EnemyBullet/ArrowBullet.h
    Enemy/EjojoBoss.cpp
    Enemy/EjojoBoss.h
    Player/JetpackPlayerA.cpp
    Player/JetpackPlayerA.h
    Player/JetpackPlayerB.cpp
    Player/JetpackPlayerB.h
    InteractiveBlock/GasMachine.cpp
    InteractiveBlock/GasMachine.h
    InteractiveBlock/Gas.cpp
    InteractiveBlock/Gas.h
    Scene/CreditScene.cpp
    Scene/CreditScene.h
    InteractiveBlock/Doraemon.cpp
    InteractiveBlock/Doraemon.h
    Bullet/RedBullet.cpp
    Bullet/RedBullet.h
    EnemyBullet/EnemyRedBullet.cpp
    EnemyBullet/EnemyRedBullet.h
)

IF (WIN32)
    target_include_directories(Final-Project  PUBLIC C:/allegro/include)
    target_link_directories(Final-Project  PUBLIC C:/allegro/lib)
    target_compile_options(Final-Project  PUBLIC ${ALLEGRO5_CFLAGS_OTHER})
    target_link_libraries(Final-Project liballegro_monolith)
ELSE()
    find_package(PkgConfig)
    pkg_check_modules(ALLEGRO5 REQUIRED allegro-5 allegro_main-5 allegro_font-5 allegro_dialog-5 allegro_primitives-5 allegro_image-5 allegro_ttf-5 allegro_audio-5 allegro_acodec-5)
    target_include_directories(Final-Project PUBLIC lib)
    target_include_directories(Final-Project  PUBLIC ${ALLEGRO5_INCLUDE_DIRS})
    target_compile_options(Final-Project  PUBLIC ${ALLEGRO5_CFLAGS_OTHER})
    target_link_libraries(Final-Project  ${ALLEGRO5_LIBRARIES})
    target_link_directories(Final-Project  PUBLIC ${ALLEGRO5_LIBRARY_DIRS})
ENDIF()