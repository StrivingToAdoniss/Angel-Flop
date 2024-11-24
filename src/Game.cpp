// Game.cpp
#include "Game.hpp"

void Game::Initialize(){
    SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_VSYNC_HINT);
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Angel Flop");

    //target = LoadRenderTexture(VIRTUAL_WIDTH, VIRTUAL_HEIGHT);
   // SetTextureFilter(target.texture, TEXTURE_FILTER_POINT);  // Texture scale filter to use
    
    SetTargetFPS(60);
}
void Game::Update(){
    
}

Game::Game(){
    
}

Game::~Game() {
    //UnloadRenderTexture(target);
    CloseWindow();
}

void Game::Run(){
    Initialize();
    while (!WindowShouldClose()) {
       // dt = GetFrameTime();
        Update();
        Draw();
    }
}