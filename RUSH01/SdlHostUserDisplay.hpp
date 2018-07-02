/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SdlHostUserDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:11:32 by omartyno          #+#    #+#             */
//   Updated: 2018/07/01 14:56:36 by avolgin          ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#ifndef SDLHOSTUSERDISPLAY_HPP
# define SDLHOSTUSERDISPLAY_HPP
# include  "SdlTimeDisplay.hpp"
# include "HostUserMonitor.hpp"

class SdlHostUserDisplay : public SdlDisplay
{
public:
	SdlHostUserDisplay( void );
	SdlHostUserDisplay( const SdlHostUserDisplay & src );
	~SdlHostUserDisplay( void );
	SdlHostUserDisplay &	operator=( const SdlHostUserDisplay & src );
//	void				updateData( void );
	void				init(void)throw(const char *);
	void				draw(void);
	void 				handleEventH( SDL_Event& e );
    void                close(void);	

public:
	SDL_Renderer *renderer;
	SDL_Window *window;
	SDL_Surface *surf_time;
	SDL_Surface *surf_date;
	TTF_Font *font;
	HostUserMonitor *hostuser;
	SDL_Color color;
	bool running;
	SDL_Texture *texture;
	SDL_Texture *texture1;
	SDL_Event event;
	int windowID;
};

#endif
