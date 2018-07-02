// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SdlHostUserDisplay.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/30 11:48:19 by avolgin           #+#    #+#             //
//   Updated: 2018/07/01 14:56:12 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SdlHostUserDisplay.hpp"
#include <vector>
#define DATA hostuser->dataToString()

SdlHostUserDisplay::SdlHostUserDisplay(void) {
	return ;
}
SdlHostUserDisplay::SdlHostUserDisplay(const SdlHostUserDisplay & obj) {

}
SdlHostUserDisplay::~SdlHostUserDisplay(void) {

}
SdlHostUserDisplay & SdlHostUserDisplay::operator=(SdlHostUserDisplay const & src) {
	return *this;
}
void SdlHostUserDisplay::init(void) throw(const char*){
bool running = true;
hostuser = new HostUserMonitor;
window = SDL_CreateWindow("HostUser",
0, 210, 200, 100, SDL_WINDOW_RESIZABLE);
renderer = SDL_CreateRenderer(window, -1, 0);
font = TTF_OpenFont("./src/font.ttf", 25);
color.r = 255;
color.g = 255;
color.b = 255;
SDL_SetRenderDrawColor(renderer, 55, 55, 55, 55);
}

void SdlHostUserDisplay::close(void) {
TTF_CloseFont(font);
SDL_DestroyRenderer(renderer);
SDL_DestroyWindow(window);
delete hostuser;
}

void SdlHostUserDisplay::handleEventH( SDL_Event& e )
{
	//If an event was detected for this window
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

void SdlHostUserDisplay::draw(void) {
SDL_RenderClear(renderer);
hostuser->updateData();
surf_time = TTF_RenderText_Solid(font, DATA[1]->c_str(), color);
surf_date = TTF_RenderText_Solid(font, DATA[0]->c_str(), color);
texture = SDL_CreateTextureFromSurface(renderer, surf_time);
texture1 = SDL_CreateTextureFromSurface(renderer, surf_date);
int texW = 0;
int texH = 0;
SDL_QueryTexture(texture, NULL, NULL, &texW, &texH);
SDL_Rect dstrect = { 5, 5, texW, texH };
SDL_QueryTexture(texture1, NULL, NULL, &texW, &texH);
SDL_Rect dstrect1 = { 25, 40, texW, texH };
SDL_RenderCopy(renderer, texture, NULL, &dstrect);
SDL_RenderCopy(renderer, texture1, NULL, &dstrect1);
SDL_RenderPresent(renderer);
SDL_DestroyTexture(texture);
SDL_DestroyTexture(texture1);
SDL_FreeSurface(surf_time);
SDL_FreeSurface(surf_date);
return ;
}

std::ostream & operator<<(std::ostream & o, SdlHostUserDisplay const & rhs);
