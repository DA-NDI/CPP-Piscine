// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SdlNetDisplay.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/30 11:48:19 by avolgin           #+#    #+#             //
//   Updated: 2018/07/01 22:15:33 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SdlNetDisplay.hpp"
#include <string.h>
#include <unistd.h>

#define DATA net->dataToString()

SdlNetDisplay::SdlNetDisplay(void) {
	return ;
}
SdlNetDisplay::SdlNetDisplay(const SdlNetDisplay & obj) {

}
SdlNetDisplay::~SdlNetDisplay(void) {

}
SdlNetDisplay & SdlNetDisplay::operator=(SdlNetDisplay const & src) {
	return *this;
}
void SdlNetDisplay::init(void) throw(const char*){
bool running = true;
t_top_data		td;
td.lastupdated = 0;
net = new NetworkMonitor(td);
window = SDL_CreateWindow("NETWORK",
0, 820, 300, 100, SDL_WINDOW_RESIZABLE);
renderer = SDL_CreateRenderer(window, -1, 0);
font = TTF_OpenFont("./src/font.ttf", 25);
color.r = 255;
color.g = 255;
color.b = 255;
SDL_SetRenderDrawColor(renderer, 55, 55, 55, 55);
}

void SdlNetDisplay::close(void) {
TTF_CloseFont(font);
SDL_DestroyRenderer(renderer);
SDL_DestroyWindow(window);
delete net;
}

void SdlNetDisplay::handleEventH( SDL_Event& e )
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

void SdlNetDisplay::draw(void) {
SDL_RenderClear(renderer);
net->updateData();
surf_net = TTF_RenderText_Solid(font, DATA[0]->c_str(), color);
surf_1 = TTF_RenderText_Solid(font, DATA[1]->c_str(), color);
texture = SDL_CreateTextureFromSurface(renderer, surf_net);
texture1 = SDL_CreateTextureFromSurface(renderer, surf_1);
int texW = 0;
int texH = 0;
SDL_QueryTexture(texture, NULL, NULL, &texW, &texH);
SDL_Rect dstrect = { 5, 5, texW, texH };
SDL_QueryTexture(texture1, NULL, NULL, &texW, &texH);
SDL_Rect dstrect1 = { 5, 40, texW, texH };
SDL_RenderCopy(renderer, texture, NULL, &dstrect);
usleep(5000);
SDL_RenderCopy(renderer, texture1, NULL, &dstrect1);
//SDL_RenderCopy(renderer, texture2, NULL, &dstrect2);
// SDL_RenderCopy(renderer, texture3, NULL, &dstrect1);
SDL_DestroyTexture(texture);
SDL_DestroyTexture(texture1);
//SDL_DestroyTexture(texture2);
// SDL_DestroyTexture(texture3);
SDL_FreeSurface(surf_net);
SDL_FreeSurface(surf_1);
// SDL_FreeSurface(surf_2);
// SDL_FreeSurface(surf_3);
SDL_RenderPresent(renderer);
return ;
}

std::ostream & operator<<(std::ostream & o, SdlNetDisplay const & rhs);
