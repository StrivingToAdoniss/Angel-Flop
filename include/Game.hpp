// Game.hpp
#pragma once
#include <raylib.h>


class Game{
    private:
        void Initialize();
        void Update();
        void Draw();

        const int SCREEN_WIDTH = 1280;
        const int SCREEN_HEIGHT = 720;
        const int VIRTUAL_WIDTH = 512;
        const int VIRTUAL_HEIGHT = 288;
    public:
        Game();
        ~Game();

        void Run();
};