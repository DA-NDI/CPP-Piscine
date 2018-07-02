/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SdlDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:11:32 by omartyno          #+#    #+#             */
//   Updated: 2018/07/01 13:49:55 by avolgin          ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#ifndef SDLDISPLAY_HPP
# define SDLDISPLAY_HPP

# include <SDL.h>
# include <SDL_ttf.h>
//# include <SDL_gfxPrimitives.h>
# include <SDL_image.h>
# include <string>
# include <iostream>
//#include "SdlTimeDisplay.hpp"
//#include "DateTimeMonitor.hpp"

//class SdlTimeDisplay;
//class DateTimeMonitor;

class SdlDisplay
{
public:
	SdlDisplay( void );
	SdlDisplay( const SdlDisplay & src );
	virtual ~SdlDisplay( void );
	SdlDisplay &	operator=( const SdlDisplay & src );
//	virtual void				updateData( void );
	virtual void				init(void)throw(const char *);
	virtual void				draw(void);
	SDL_Texture * 				ft_load_png(std::string path)throw(const char*);



public:
	SDL_Renderer *renderer;
//	TTF_Font *font;
};

#endif
