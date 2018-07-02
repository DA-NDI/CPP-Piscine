/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SdlCPUDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:11:32 by omartyno          #+#    #+#             */
//   Updated: 2018/07/01 17:25:12 by avolgin          ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#ifndef SDLCPUDISPLAY_HPP
# define SDLCPUDISPLAY_HPP
# include  "SdlTimeDisplay.hpp"
# include "CPUMonitor.hpp"
# include "ExecMonitor.hpp"

class SdlCPUDisplay : public SdlDisplay
{
public:
	SdlCPUDisplay( void );
	SdlCPUDisplay( const SdlCPUDisplay & src );
	~SdlCPUDisplay( void );
	SdlCPUDisplay &	operator=( const SdlCPUDisplay & src );
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
	CPUMonitor *cpu;
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
