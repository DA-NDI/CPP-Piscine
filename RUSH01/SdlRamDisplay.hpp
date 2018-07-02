/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SdlRamDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:11:32 by omartyno          #+#    #+#             */
//   Updated: 2018/07/01 20:28:41 by avolgin          ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#ifndef SDLRAMDISPLAY_HPP
# define SDLRAMDISPLAY_HPP
# include  "SdlTimeDisplay.hpp"
# include "RAMMonitor.hpp"
# include "ExecMonitor.hpp"

class SdlRamDisplay : public SdlDisplay
{
public:
	SdlRamDisplay( void );
	SdlRamDisplay( const SdlRamDisplay & src );
	~SdlRamDisplay( void );
	SdlRamDisplay &	operator=( const SdlRamDisplay & src );
//	void				updateData( void );
	void				init(void)throw(const char *);
	void				draw(void);
	void 				handleEventH( SDL_Event& e );
    void                close(void);	

public:
//	SDL_Renderer *renderer;
	SDL_Window *window;
	SDL_Surface *surf_cpu;
	SDL_Surface *surf_1;
	SDL_Surface *surf_2;
	SDL_Surface *surf_3;
	TTF_Font *font;
	RAMMonitor *ram;
	SDL_Color color;
	bool running;
	SDL_Texture *texture;
	SDL_Texture *texture1;
	SDL_Texture *texture2;
	SDL_Texture *texture3;
	SDL_Event event;
	int windowID;
};

#endif
