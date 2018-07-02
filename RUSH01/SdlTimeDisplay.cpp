// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SdlTimeDisplay.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/30 11:48:19 by avolgin           #+#    #+#             //
//   Updated: 2018/07/01 14:43:30 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SdlTimeDisplay.hpp"
#define DATA monitor->dataToString()

SdlTimeDisplay::SdlTimeDisplay(void) {
	return ;
}
SdlTimeDisplay::SdlTimeDisplay(const SdlTimeDisplay & obj) {

}
SdlTimeDisplay::~SdlTimeDisplay(void) {

}
SdlTimeDisplay & SdlTimeDisplay::operator=(SdlTimeDisplay const & src) {
	return *this;
}
void SdlTimeDisplay::init(void) throw(const char*){
bool running = true;
monitor = new DateTimeMonitor;
window = SDL_CreateWindow("TimeDate",
0, 0, 100, 100, 0);
renderer = SDL_CreateRenderer(window, -1, 0);
font = TTF_OpenFont("./src/font.ttf", 25);
color.r = 255;
color.g = 255;
color.b = 255;
SDL_SetRenderDrawColor(renderer, 55, 55, 55, 55);
windowID = SDL_GetWindowID( window );
}

void SdlTimeDisplay::close(void) {
TTF_CloseFont(font);
SDL_DestroyRenderer(renderer);
SDL_DestroyWindow(window);
delete monitor;
}
void 	SdlTimeDisplay::handleEventT( SDL_Event& e )
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

void SdlTimeDisplay::draw(void) {
SDL_RenderClear(renderer);
monitor->updateData();
surf_time = TTF_RenderText_Solid(font, DATA[1]->c_str(), color);
surf_date = TTF_RenderText_Solid(font, DATA[0]->c_str(), color);
texture = SDL_CreateTextureFromSurface(renderer, surf_time);
texture1 = SDL_CreateTextureFromSurface(renderer, surf_date);
int texW = 0;
int texH = 0;
SDL_QueryTexture(texture, NULL, NULL, &texW, &texH);
SDL_Rect dstrect = { 20, 5, texW, texH };
SDL_QueryTexture(texture1, NULL, NULL, &texW, &texH);
SDL_Rect dstrect1 = { 5, 40, texW, texH };
SDL_RenderCopy(renderer, texture, NULL, &dstrect);
SDL_RenderCopy(renderer, texture1, NULL, &dstrect1);
SDL_RenderPresent(renderer);
SDL_DestroyTexture(texture);
SDL_DestroyTexture(texture1);
SDL_FreeSurface(surf_time);
SDL_FreeSurface(surf_date);
return ;
}

std::ostream & operator<<(std::ostream & o, SdlTimeDisplay const & rhs);
