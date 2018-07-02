/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SdlShow.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:11:32 by omartyno          #+#    #+#             */
//   Updated: 2018/07/01 18:26:37 by avolgin          ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#ifndef SDLSHOW_HPP
# define SDLSHOW_HPP

#include "SdlTimeDisplay.hpp"
#include "SdlHostUserDisplay.hpp"
#include "SdlOSDisplay.hpp"
#include "SdlCPUDisplay.hpp"
#include "SdlRamDisplay.hpp"
#include "SdlNetDisplay.hpp"
#include "SdlKittyDisplay.hpp"
#include "IMonitorDisplay.hpp"


class SdlShow : public IMonitorDisplay
{
public:
	SdlShow( void );
	SdlShow( const SdlShow & src );
	virtual ~SdlShow( void );
	SdlShow &	operator=( const SdlShow & src );
	virtual void				start(void)throw(const char *);
	virtual void				draww(void);
	virtual void				draw(void);
	virtual void				update(void);

protected:
};

#endif
