// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SdlOSDisplay.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/30 11:48:19 by avolgin           #+#    #+#             //
//   Updated: 2018/07/01 16:17:23 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SdlOSDisplay.hpp"
#define DATA osinfo->dataToString()

SdlOSDisplay::SdlOSDisplay(void) {
	return ;
}
SdlOSDisplay::SdlOSDisplay(const SdlOSDisplay & obj) {

}
SdlOSDisplay::~SdlOSDisplay(void) {

}
SdlOSDisplay & SdlOSDisplay::operator=(SdlOSDisplay const & src) {
	return *this;
}
void SdlOSDisplay::init(void) throw(const char*){
bool running = true;
osinfo = new OSInfo;
window = SDL_CreateWindow("Osinfo",
0, 430, 250, 100, SDL_WINDOW_RESIZABLE);
renderer = SDL_CreateRenderer(window, -1, 0);
font = TTF_OpenFont("./src/font.ttf", 20);
color.r = 255;
color.g = 255;
color.b = 255;
SDL_SetRenderDrawColor(renderer, 55, 55, 55, 55);
}

void SdlOSDisplay::close(void) {
TTF_CloseFont(font);
SDL_DestroyRenderer(renderer);
SDL_DestroyWindow(window);
delete osinfo;
}

void SdlOSDisplay::handleEventH( SDL_Event& e )
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

void SdlOSDisplay::draw(void) {
SDL_RenderClear(renderer);
osinfo->updateData();
const char *text = "OS info: ";
surf_os = TTF_RenderText_Solid(font, text, color);
surf_text = TTF_RenderText_Solid(font, DATA[0]->c_str(), color);
texture = SDL_CreateTextureFromSurface(renderer, surf_os);
texture1 = SDL_CreateTextureFromSurface(renderer, surf_text);
int texW = 0;
int texH = 0;
SDL_QueryTexture(texture, NULL, NULL, &texW, &texH);
SDL_Rect dstrect = { 5, 5, texW, texH };
SDL_QueryTexture(texture1, NULL, NULL, &texW, &texH);
SDL_Rect dstrect1 = { 0, 40, texW, texH };
SDL_RenderCopy(renderer, texture, NULL, &dstrect);
SDL_RenderCopy(renderer, texture1, NULL, &dstrect1);
SDL_RenderPresent(renderer);
SDL_DestroyTexture(texture);
SDL_DestroyTexture(texture1);
SDL_FreeSurface(surf_os);
SDL_FreeSurface(surf_text);
return ;
}

std::ostream & operator<<(std::ostream & o, SdlOSDisplay const & rhs);
