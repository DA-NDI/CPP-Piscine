// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SdlRamDisplay.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/30 11:48:19 by avolgin           #+#    #+#             //
//   Updated: 2018/07/01 22:18:02 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SdlRamDisplay.hpp"
#include <string.h>

#define DATA ram->dataToString()

SdlRamDisplay::SdlRamDisplay(void) {
	return ;
}
SdlRamDisplay::SdlRamDisplay(const SdlRamDisplay & obj) {

}
SdlRamDisplay::~SdlRamDisplay(void) {

}
SdlRamDisplay & SdlRamDisplay::operator=(SdlRamDisplay const & src) {
	return *this;
}
void SdlRamDisplay::init(void) throw(const char*){
bool running = true;
t_top_data		td;
td.lastupdated = 0;
ram = new RAMMonitor(td);
window = SDL_CreateWindow("RAM info",
0, 1020, 300, 100, SDL_WINDOW_RESIZABLE);
renderer = SDL_CreateRenderer(window, -1, 0);
font = TTF_OpenFont("./src/font.ttf", 20);
color.r = 255;
color.g = 255;
color.b = 255;
SDL_SetRenderDrawColor(renderer, 55, 55, 55, 55);
}

void SdlRamDisplay::close(void) {
TTF_CloseFont(font);
SDL_DestroyRenderer(renderer);
SDL_DestroyWindow(window);
delete ram;
}

void SdlRamDisplay::handleEventH( SDL_Event& e )
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

void SdlRamDisplay::draw(void) {
SDL_RenderClear(renderer);
ram->updateData();

unsigned int cpuLoad;// = stoi(DATA[3]->substr(DATA[1]->find("%") - 3, DATA[1]->size()));
char *dnv = new char[10];
sscanf(DATA[1]->c_str(), "%s: %u%%", dnv, &cpuLoad);
delete []dnv;
//ccp = ccp.substr(0, ccp.size()-1);
//int cpuLoad = atoi(ccp);
//const char *cpu2 = ccp.c_str();
const char *cpu2;
SDL_Rect imgPartRect;
if (cpuLoad > 0 && cpuLoad <= 20)
{
texture2 = IMG_LoadTexture(renderer, "./src/bar1.png");

	cpu2 = "| |";
}
else if (cpuLoad > 20 && cpuLoad <= 40)
{
texture2 = IMG_LoadTexture(renderer, "./src/bar3.png");


	cpu2 = "| | | |";
}
else if (cpuLoad > 40 && cpuLoad <= 60)
{
texture2 = IMG_LoadTexture(renderer, "./src/bar5.png");

	cpu2 = "| | | | | |";
}
else if(cpuLoad > 60 && cpuLoad <= 80)
{
texture2 = IMG_LoadTexture(renderer, "./src/bar7.png");

	cpu2 = "| | | | | | | |";
}
else
{
texture2 = IMG_LoadTexture(renderer, "./src/bar9.png");

	cpu2 = "| | | | | | | | | |";
}
surf_1 = TTF_RenderText_Solid(font, cpu2, color);
texture1 = SDL_CreateTextureFromSurface(renderer, surf_1);
const char *text = "Total memory: 8192Mb";
surf_cpu = TTF_RenderText_Solid(font, DATA[0]->c_str(), color);
surf_2 = TTF_RenderText_Solid(font, text, color);
texture = SDL_CreateTextureFromSurface(renderer, surf_cpu);
texture3 = SDL_CreateTextureFromSurface(renderer, surf_2);
int texW = 0;
int texH = 0;
SDL_QueryTexture(texture, NULL, NULL, &texW, &texH);
SDL_Rect dstrect = { 5, 5, texW, texH };
SDL_QueryTexture(texture1, NULL, NULL, &texW, &texH);
SDL_Rect dstrect1 = { 5, 40, texW, texH };
SDL_QueryTexture(texture2, NULL, NULL, &texW, &texH);
SDL_Rect dstrect2 = { 5, 50, texW, texH };
SDL_QueryTexture(texture3, NULL, NULL, &texW, &texH);
SDL_Rect dstrect3 = { 5, 70, texW, texH };
// SDL_QueryTexture(texture3, NULL, NULL, &texW, &texH);
// SDL_Rect dstrect3 = { 5, 80, texW, texH };
SDL_RenderCopy(renderer, texture, NULL, &dstrect);
SDL_RenderCopy(renderer, texture1, NULL, &dstrect1);
SDL_RenderCopy(renderer, texture2, NULL, &dstrect2);
SDL_RenderCopy(renderer, texture3, NULL, &dstrect3);
// SDL_RenderCopy(renderer, texture3, NULL, &dstrect1);
SDL_DestroyTexture(texture);
SDL_DestroyTexture(texture1);
SDL_DestroyTexture(texture2);
SDL_DestroyTexture(texture3);
SDL_FreeSurface(surf_cpu);
SDL_FreeSurface(surf_1);
SDL_FreeSurface(surf_2);
// SDL_FreeSurface(surf_3);
SDL_RenderPresent(renderer);
return ;
}

std::ostream & operator<<(std::ostream & o, SdlRamDisplay const & rhs);