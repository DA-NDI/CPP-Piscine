/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:39:55 by omartyno          #+#    #+#             */
//   Updated: 2018/07/01 23:42:39 by avolgin          ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#include "CursesDisplay.hpp"
#include "SdlShow.hpp"

int main(int argc, char **argv) {
	if (argc != 2)
	{
		std::cout << "Usage: ./ft_gkrellm <mode>" << std::endl;
		std::cout << "-s for sdl(graphic mode) OR -c for ncurses(terminal mode)" << std::endl;
		return 2;
	}
	std::string	arg = argv[1];
	if (arg == "-c") {
		CursesDisplay		ncurses_disp;
		ncurses_disp.start();
	}
	else if (arg == "-s") {
		SdlShow show;
		show.start();
	}
	system ("leaks ft_gkrellm");
	return (0);
}
