// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//    ShrubberyCreationForm.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvino42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:54:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/26 18:08:31 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrub", 0, 0) {
	this->setTarget("Default");
	return ;
}

 ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

 ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	 Form("Shrub", 145, 137) {
	 std::srand(std::time(0));
	 this->setTarget(target);
}

void ShrubberyCreationForm::Action(const std::string & target) const{
	std::string filename = (target + "_shrubbery");
	std::ofstream ofs(filename);
	int k = std::rand() % 3;
	std::string tree1 =
"                 9999999\n"
"       ooooo    999999I99    oo8888o\n"
"     oooooooo 99999I999999 88888888I8o\n"
"    oIIooo999II999I99988II88888I88 \n"
"   oooooIoo99II99I I999888888888888 \n"
"   ooooI oooo99II V I99   88888 I88\n"
"    ooII   Ioo    IoI         I I8\n" 
"       IoI        I I         I I\n"
"       IoI        I I         I I\n"
"  II   I I I      I I  I   I II I\n";
	std::string tree2 =
"      oxoxoo    ooxoo\n"
"  ooxoxo oo  oxoxooo\n"
" oooo xxoxoo ooo ooox\n"
" oxo o oxoxo  xoxxoxo\n"
"  oxo xooxoooo o ooo\n"
"    oooIIooII  IoIo\n"
"         I  I\n"
"         I  I\n"
"         I  I\n"
"         I DI\n"
"         I  I\n"
"         I  I\n"
"         I  I\n";
std::string tree3 = 
"              _{\\ _{\\{\\/}/}/}__\n"
"             {/{/\\}{/{/\\}(\\}{/\\} _\n"
"            {/{/\\}{/{/\\}(_)\\}{/{/\\}\n"
"        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
"       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
"       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
"      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
"      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"
"     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
"      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
"       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
"      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
"       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
"         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
"          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
"            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
"             {/{\\{\\{\\/}/}{\\{\\}/}\n"
"              {){/ {\\/}{\\/} \\}\\}\n"
"              (_)  \\.- .-/\n"
"          __. .--- |'-.-'| --...__\n"
"   _. .--    .-    |'-.-'|  ' -.    --. .__\n"
" -     ' .  . '    |.'-._| '  . .  '   \n"
" .   -       .--'  | '-.'|    .  '  . '\n"
"           . .     |'-_.-|\n"
"  .  '  .       _.-|-._ -|-._  .  '  .\n"
"              .'   |'- .-|   '.\n"
"  . .-   ' .  '.   `-._.-´   .'  '  - .\n"
"   .-           '-._______.-'     '  .\n"
"        .       |\n"
"    .       .   |\\   .    ' '-.\n"
"    ___________/  \\____________\n"
"   /  Why is it, when you want  \\\n"
"  |  something, it is so damn   |\n"
"  |    much work to get it?     |\n"
"   \\___________________________/\n";

    if (k == 0)
		ofs << tree1;
	else if (k == 1)
		ofs << tree2;
	else
		ofs << tree3;
	return;
}

ShrubberyCreationForm:: ShrubberyCreationForm(const  ShrubberyCreationForm & copyFrom) : Form(copyFrom) {
	return ;
}
 ShrubberyCreationForm&		 ShrubberyCreationForm::operator=( ShrubberyCreationForm const &) {
	return *this;
}
