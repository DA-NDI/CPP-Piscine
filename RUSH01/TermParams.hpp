/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TermParams.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 10:11:45 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 19:40:04 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TERMPARAMS_HPP
# define TERMPARAMS_HPP

# include <ncurses.h>
# include <iostream>
# include <sstream>

class TermParams
{
public:
	TermParams( void );
	TermParams( TermParams const &src );
	~TermParams( void );
	
	TermParams &		operator=( TermParams const & src );

	int		getHeight( void ) const;
	int		getWidth( void ) const;

	void	update( void );

private:
	int					_height;
	int					_width;

};

std::ostream &	operator<<(std::ostream	& o, TermParams const & src );

#endif
