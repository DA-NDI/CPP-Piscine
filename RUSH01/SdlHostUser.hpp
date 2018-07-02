/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SdlTimeDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:11:32 by omartyno          #+#    #+#             */
//   Updated: 2018/06/30 22:49:31 by avolgin          ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#ifndef SDLTIMEDISPLAY_HPP
# define SDLTIMEDISPLAY_HPP
# include <SDL.h>
# include <SDL_ttf.h>
//# include <SDL_gfxPrimitives.h>
# include <SDL_image.h>
# include <string>
# include <iostream>

class SdlTimeDisplay
{
public:
	SdlTimeDisplay( void );
	SdlTimeDisplay( const SdlTimeDisplay & src );
	~SdlTimeDisplay( void );
	SdlTimeDisplay &	operator=( const SdlTimeDisplay & src );
	void				updateData( void );
	void				init(void)throw(const char *);
	void				draw(void);

private:
	time_t			_value;
	std::string		_name;
};

#endif
