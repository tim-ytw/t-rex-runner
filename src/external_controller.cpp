// CPP
#include <iostream>

// SDL2
#include <SDL2/SDL.h>

// LOCAL
#include "external_controller.h"
#include "sdl_renderer.h"
#include "sdl_input.h"
#include "TRexGame.h"
#include "game_env.h"


void Controller::Play()
{
	Renderer* renderer = new SDLRenderer();
	renderer->Init();
	
	Input* input = new SDLInput();
	input->Init();

	TRexGame game(renderer, input);
	game.Play();
	
	delete renderer;
}



