/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SdlOSDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:11:32 by omartyno          #+#    #+#             */
//   Updated: 2018/07/01 16:14:33 by avolgin          ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#ifndef SDLOSDISPLAY_HPP
# define SDLOSDISPLAY_HPP
# include  "SdlTimeDisplay.hpp"
# include "OSInfo.hpp"

class SdlOSDisplay : public SdlDisplay
{
public:
	SdlOSDisplay( void );
	SdlOSDisplay( const SdlOSDisplay & src );
	~SdlOSDisplay( void );
	SdlOSDisplay &	operator=( const SdlOSDisplay & src );
//	void				updateData( void );
	void				init(void)throw(const char *);
	void				draw(void);
	void 				handleEventH( SDL_Event& e );
    void                close(void);	

public:
	SDL_Renderer *renderer;
	SDL_Window *window;
	SDL_Surface *surf_os;
	SDL_Surface *surf_text;
	TTF_Font *font;
	OSInfo *osinfo;
	SDL_Color color;
	bool running;
	SDL_Texture *texture;
	SDL_Texture *texture1;
	SDL_Event event;
	int windowID;
};

#endif
