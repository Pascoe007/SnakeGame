#include "MyGame.h"



void MyGame::input(SDL_Event& event) {
    switch (event.key.keysym.sym) {
    case SDLK_w:
        player.y - player.speed;
        break;
    case SDLK_s:
        player.y + player.speed;
        break;
    }
}

void MyGame::update() {
    snake.x = player.x;
    snake.y = player.y;
    
}

void MyGame::render(SDL_Renderer* renderer) {
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDrawRect(renderer, &snake);
}