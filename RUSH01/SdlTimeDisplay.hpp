/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SdlTimeDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:11:32 by omartyno          #+#    #+#             */
//   Updated: 2018/07/01 14:00:59 by avolgin          ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#ifndef SDLTIMEDISPLAY_HPP
# define SDLTIMEDISPLAY_HPP
# include  "SdlDisplay.hpp"
# include "DateTimeMonitor.hpp"

//class SdlDisplay;
//class DateTimeMonitor;

class SdlTimeDisplay : public SdlDisplay
{
public:
	SdlTimeDisplay( void );
	SdlTimeDisplay( const SdlTimeDisplay & src );
	~SdlTimeDisplay( void );
	SdlTimeDisplay &	operator=( const SdlTimeDisplay & src );
//	void				updateData( void );
	void				init(void)throw(const char *);
	void				draw(void);
	void 				handleEventT( SDL_Event& e );
    void                close(void);	

public:
//	SDL_Renderer *renderer;
	SDL_Window *window;
	SDL_Surface *surf_time;
	SDL_Surface *surf_date;
	TTF_Font *font;
	DateTimeMonitor *monitor;
	SDL_Color color;
	bool running;
	SDL_Texture *texture;
	SDL_Texture *texture1;
	SDL_Event event;
	int windowID;
};

#endif
