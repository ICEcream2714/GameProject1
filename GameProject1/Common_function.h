#ifndef COMMON_FUNCTION_H
#define COMMON_FUNCTION_H

#include <Windows.h>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>

//Screen
const int SCREEN_WIDTH = 1200;
const int SCREEN_HEIGHT = 600;
const int SCREEN_BPP = 32;

static SDL_Surface* g_screen = NULL;
static SDL_Surface* g_bkground = NULL;
static SDL_Event g_even;

// static SDL_Surface* g_object;


namespace SDLCommonFunc
{
	SDL_Surface* LoadImage(std::string file_path);
	SDL_Rect ApplySurface(SDL_Surface* src, SDL_Surface* des, int x, int y);
	void CleanUp();
}




#endif