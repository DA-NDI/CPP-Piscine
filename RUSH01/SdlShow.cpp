// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SdlShow.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/30 11:48:19 by avolgin           #+#    #+#             //
//   Updated: 2018/07/01 22:36:41 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SdlShow.hpp"
#include <unistd.h>

SdlShow::SdlShow(void) {
	return ;
}
SdlShow::SdlShow(const SdlShow & obj) {

}
SdlShow::~SdlShow(void) {

}
SdlShow & SdlShow::operator=(SdlShow const & src) {
	return *this;
}
void SdlShow::start(void) throw(const char*){
bool running = true;
SDL_Init(SDL_INIT_VIDEO);
TTF_Init();
int imgFlags = IMG_INIT_PNG;
if( !( IMG_Init( imgFlags ) & imgFlags ) )
{
	std::cout << "SDL_image could not initialize!" << std::endl;
	running = false;
}
SdlTimeDisplay DTM1;
DTM1.init();
SdlHostUserDisplay HUD1;
HUD1.init();
SdlOSDisplay OS1;
OS1.init();
SdlCPUDisplay CP1;
CP1.init();
SdlRamDisplay R1;
R1.init();
SdlNetDisplay N1;
N1.init();
SdlKittyDisplay K1;
K1.init();
SDL_Event e;
while (running)
{

usleep(900000);
	while( SDL_PollEvent( &e ) != 0 )
	{
		if( e.type == SDL_QUIT )
		{
			running = false;
		}
		DTM1.handleEventT( e );
		HUD1.handleEventH( e );
		OS1.handleEventH( e );
		CP1.handleEventH( e );
		R1.handleEventH( e );
		N1.handleEventH( e );
		K1.handleEventH( e );
	}
DTM1.draw();
HUD1.draw();
OS1.draw();
CP1.draw();
R1.draw();
N1.draw();
K1.draw();
}
DTM1.close();
HUD1.close();
OS1.close();
CP1.close();
R1.close();
N1.close();
K1.close();
TTF_Quit();
SDL_Quit();
}
void SdlShow::draww(void) {
	return ;
}
void SdlShow::update(void) {
	return ;
}
void SdlShow::draw(void) {
	return ;
}

std::ostream & operator<<(std::ostream & o, SdlShow const & rhs);
