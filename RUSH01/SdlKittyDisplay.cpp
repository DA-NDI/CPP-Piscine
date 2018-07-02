// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SdlKittyDisplay.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/30 11:48:19 by avolgin           #+#    #+#             //
//   Updated: 2018/07/01 22:15:05 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SdlKittyDisplay.hpp"
#include <string.h>

#define DATA ram->dataToString()

SdlKittyDisplay::SdlKittyDisplay(void) {
	return ;
}
SdlKittyDisplay::SdlKittyDisplay(const SdlKittyDisplay & obj) {

}
SdlKittyDisplay::~SdlKittyDisplay(void) {

}
SdlKittyDisplay & SdlKittyDisplay::operator=(SdlKittyDisplay const & src) {
	return *this;
}
void SdlKittyDisplay::init(void) throw(const char*){
bool running = true;
window = SDL_CreateWindow("KITTY",
0, 1020, 200, 200, SDL_WINDOW_RESIZABLE);
renderer = SDL_CreateRenderer(window, -1, 0);
font = TTF_OpenFont("./src/font.ttf", 25);
color.r = 255;
color.g = 255;
color.b = 255;
SDL_SetRenderDrawColor(renderer, 55, 55, 55, 55);
}

void SdlKittyDisplay::close(void) {
TTF_CloseFont(font);
SDL_DestroyRenderer(renderer);
SDL_DestroyWindow(window);
}

void SdlKittyDisplay::handleEventH( SDL_Event& e )
{
	if( e.type == SDL_WINDOWEVENT && e.window.windowID == windowID )
	{
		switch( e.window.event )
		{
			case SDL_WINDOWEVENT_CLOSE:
			SDL_HideWindow( window );
			break;
		}
	}
}

void SdlKittyDisplay::draw(void) {
SDL_RenderClear(renderer);
int FPS = 60;
static int frameTime = 0;
SDL_Rect kittyRect;
int texW = 0;
int texH = 0;
texture = IMG_LoadTexture(renderer, "./src/kitty.png");
//surf_1 = TTF_RenderText_Solid(font, cpu2, color);
//texture1 = SDL_CreateTextureFromSurface(renderer, surf_1);
//const char *text = "OS info: ";
// surf_cpu = TTF_RenderText_Solid(font, cpu1, color);
// texture = SDL_CreateTextureFromSurface(renderer, surf_cpu);
SDL_QueryTexture(texture, NULL, NULL, &texW, &texH);
frameW = texW / 8;
frameH = texH / 3;
kittyRect.x = 0;
kittyRect.y = 0;
kittyRect.w = frameW;
kittyRect.h = frameH;
frameTime++;
// std::cout << "frametime" << frameTime << std::endl;
// std::cout << "framew" << frameW << std::endl;
// std::cout << "frameH" << frameH << std::endl;
if (FPS / frameTime == 7)
	frameTime = 0;
	kittyRect.x += frameW * frameTime;
	if (kittyRect.x >= texW)
		kittyRect.x = 0;
//}
// std::cout << "rect.x" << kittyRect.x << std::endl;	
// std::cout << "rect.y" << kittyRect.y << std::endl;	
// SDL_Rect dstrect = { 5, 5, texW, texH };
// SDL_QueryTexture(texture1, NULL, NULL, &texW, &texH);
// SDL_Rect dstrect1 = { 5, 40, texW, texH };
// SDL_QueryTexture(texture2, NULL, NULL, &texW, &texH);
// SDL_Rect dstrect2 = { 5, 60, texW, texH };
// SDL_QueryTexture(texture3, NULL, NULL, &texW, &texH);
// SDL_Rect dstrect3 = { 5, 80, texW, texH };
SDL_RenderCopy(renderer, texture, &kittyRect, NULL);
// SDL_RenderCopy(renderer, texture1, NULL, &dstrect1);
// SDL_RenderCopy(renderer, texture2, NULL, &dstrect2);
// SDL_RenderCopy(renderer, texture3, NULL, &dstrect1);
SDL_DestroyTexture(texture);
// SDL_DestroyTexture(texture1);
// SDL_DestroyTexture(texture2);
// SDL_DestroyTexture(texture3);
//SDL_FreeSurface(surf_cpu);
// SDL_FreeSurface(surf_1);
// SDL_FreeSurface(surf_2);
// SDL_FreeSurface(surf_3);
SDL_RenderPresent(renderer);
return ;
}

std::ostream & operator<<(std::ostream & o, SdlKittyDisplay const & rhs);
