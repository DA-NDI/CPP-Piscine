// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SdlTimeDisplay.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/30 11:48:19 by avolgin           #+#    #+#             //
//   Updated: 2018/06/30 22:53:34 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SdlTimeDisplay.hpp"
#include "DateTimeMonitor.hpp"

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
 SDL_Event event;
 //DateTimeMonitor monitor;
 // std::string **dtm = monitor.dataToString();
 // const char *date = dtm[0]->c_str();
 // const char *time = dtm[1]->c_str();
 SDL_Init(SDL_INIT_VIDEO);
 TTF_Init();
 SDL_Window * window = SDL_CreateWindow("SDL_ttf in SDL2",
  0, 60, 100, 100, SDL_WINDOW_RESIZABLE);
 SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
 TTF_Font * font = TTF_OpenFont("./src/font.ttf", 25);
 const char * error = TTF_GetError();
 SDL_Color color = { 255, 255, 255 };
 // SDL_Surface * surface = TTF_RenderText_Solid(font,
 //  time, color);
 // SDL_Surface * surface1 = TTF_RenderText_Solid(font,
 //  date, color);
 // SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer,
 //  surface);
 // SDL_Texture * texture1 = SDL_CreateTextureFromSurface(renderer,
 //  surface1);
 // int texW = 0;
 // int texH = 0;
 // SDL_QueryTexture(texture, NULL, NULL, &texW, &texH);
 // SDL_Rect dstrect = { 20, 5, texW, texH };
 // SDL_QueryTexture(texture1, NULL, NULL, &texW, &texH);
 // SDL_Rect dstrect1 = { 5, 40, texW, texH };
 SDL_SetRenderDrawColor(renderer, 55, 55, 55, 55);
 while (running)
 {
	while(SDL_PollEvent(&event))
	{
		if((event.type == SDL_QUIT) || (event.type == SDL_KEYDOWN && \
		event.key.keysym.sym == SDLK_ESCAPE))
			running = 0;
	}
SDL_RenderClear(renderer);
DateTimeMonitor monitor;
 std::string **dtm = monitor.dataToString();
 const char *date = dtm[0]->c_str();
 const char *time = dtm[1]->c_str();
 SDL_Surface * surface = TTF_RenderText_Solid(font,
  time, color);
 SDL_Surface * surface1 = TTF_RenderText_Solid(font,
  date, color);
 SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer,
  surface);
 SDL_Texture * texture1 = SDL_CreateTextureFromSurface(renderer,
  surface1);
 int texW = 0;
 int texH = 0;
 SDL_QueryTexture(texture, NULL, NULL, &texW, &texH);
 SDL_Rect dstrect = { 20, 5, texW, texH };
 SDL_QueryTexture(texture1, NULL, NULL, &texW, &texH);
 SDL_Rect dstrect1 = { 10, 40, texW, texH };
//	DateTimeMonitor dtm;
	SDL_RenderCopy(renderer, texture, NULL, &dstrect);
	SDL_RenderCopy(renderer, texture1, NULL, &dstrect1);
	SDL_RenderPresent(renderer);
}
// SDL_DestroyTexture(texture);
// SDL_FreeSurface(surface);
 TTF_CloseFont(font);

 SDL_DestroyRenderer(renderer);
 SDL_DestroyWindow(window);
 TTF_Quit();
 SDL_Quit();}
void draw(void) {
	return ;
}

std::ostream & operator<<(std::ostream & o, SdlTimeDisplay const & rhs);
