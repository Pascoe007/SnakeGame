
#include <iostream>
#include <vector>
#include <string>

#include "SDL.h"

static struct Player {
public:
    int x = 400;
    int y = 300;
    int speed = 10;
}player;


class MyGame {

private:
    SDL_Rect snake = { 0, 0, 64, 64 };

public:
    void input(SDL_Event& event);
    void render(SDL_Renderer* renderer);
    void update();
};