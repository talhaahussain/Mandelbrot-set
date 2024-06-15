#include <SDL2/SDL.h>
#include <numeric>
#include <complex>

int in_set(std::complex<double> c) {
    std::complex<double> z(0, 0);
    for (int i = 0; i < 25; i++) {
        z = std::pow(z, 2) + c;
        if (std::norm(z) > 10) {
            return i;
        }
    }
    return 0;
}

int main() {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;
    SDL_CreateWindowAndRenderer(2000, 2000, 0, &window, &renderer);
    SDL_RenderSetScale(renderer, 2, 2);
    
    for (double x = 0.0; x < 1.0; x += 0.01) {
        for (double y = 0.0; y < 1.0; y += 0.01) {
            double point_x = std::lerp(-2.0, 2.0, x);
            double point_y = std::lerp(-2.0, 2.0, y);
            int iters = in_set(std::complex<double>(point_x, point_y));

        }
    }

    SDL_Quit();    
    return 0;
}
