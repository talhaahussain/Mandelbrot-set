#include <SDL2/SDL.h>
#include <numeric>
#include <complex>

int main() {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;
    SDL_CreateWindowAndRenderer(2000, 2000, 0, &window, &renderer);
    SDL_RenderSetScale(renderer, 2, 2);
    
    SDL_Quit();    
    return 0;
}
