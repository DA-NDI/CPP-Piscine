// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SdlDisplay.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/30 11:48:19 by avolgin           #+#    #+#             //
//   Updated: 2018/07/01 13:52:24 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SdlDisplay.hpp"

SdlDisplay::SdlDisplay(void) {
	return ;
}
SdlDisplay::SdlDisplay(const SdlDisplay & obj) {

}
SdlDisplay::~SdlDisplay(void) {

}

SDL_Texture * SdlDisplay::ft_load_png(std::string path)throw(const char*)
{
    //The final texture
    SDL_Texture* newTexture = NULL;
    //Load image at specified path
    SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
    if( loadedSurface == NULL )
        throw("Unable to load image!");
    else
    {
        newTexture = SDL_CreateTextureFromSurface( this->renderer, loadedSurface );
        if( newTexture == NULL )
            throw( "Unable to create texture from !");
        //Get rid of old loaded surface
        SDL_FreeSurface( loadedSurface );
    }
    return newTexture;
}

SdlDisplay & SdlDisplay::operator=(SdlDisplay const & src) {
	return *this;
}
 void SdlDisplay::init(void) throw(const char*){
// bool running = true;
// DateTimeMonitor monitor;
// SDL_Event event;
// SDL_Init(SDL_INIT_VIDEO);
// TTF_Init();
// SDL_Window * window = SDL_CreateWindow("SDL_ttf in SDL2",
// SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 100, 100, 0);
// renderer = SDL_CreateRenderer(window, -1, 0);
// font = TTF_OpenFont("./src/font.ttf", 25);
// const char * error = TTF_GetError();
// SDL_Color color = { 255, 255, 255 };
// SDL_SetRenderDrawColor(renderer, 55, 55, 55, 55);
// while (running)
// {
// 	while(SDL_PollEvent(&event))
// 	{
// 		if((event.type == SDL_QUIT) || (event.type == SDL_KEYDOWN && \
// 		event.key.keysym.sym == SDLK_ESCAPE))
// 			running = 0;
// 	}
// SDL_RenderClear(renderer);
// monitor.updateData();
// std::string **dtm = monitor.dataToString();
// const char *date = dtm[0]->c_str();
// const char *time = dtm[1]->c_str();
// SDL_Surface * surface = TTF_RenderText_Solid(font, time, color);
// SDL_Surface * surface1 = TTF_RenderText_Solid(font, date, color);
// SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, surface);
// SDL_Texture * texture1 = SDL_CreateTextureFromSurface(renderer, surface1);
// int texW = 0;
// int texH = 0;
// SDL_QueryTexture(texture, NULL, NULL, &texW, &texH);
// SDL_Rect dstrect = { 20, 5, texW, texH };
// SDL_QueryTexture(texture1, NULL, NULL, &texW, &texH);
// SDL_Rect dstrect1 = { 5, 40, texW, texH };
// SDL_RenderCopy(renderer, texture, NULL, &dstrect);
// SDL_RenderCopy(renderer, texture1, NULL, &dstrect1);
// SDL_RenderPresent(renderer);
// }
// TTF_CloseFont(font);

// SDL_DestroyRenderer(renderer);
// SDL_DestroyWindow(window);
// TTF_Quit();
// SDL_Quit();
 }


 
void SdlDisplay::draw(void) {
	return ;
}

std::ostream & operator<<(std::ostream & o, SdlDisplay const & rhs);
