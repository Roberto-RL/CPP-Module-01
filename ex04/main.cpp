/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:23:27 by rrimonte          #+#    #+#             */
/*   Updated: 2024/06/16 13:07:19 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void  ft_replace(char **argv, std::string str)
{
  std::ofstream outfile;
  int position;

  outfile.open((std::string(argv[1]) + ".replace").c_str());
  if (outfile.fail())
		return ;
  for(int i = 0; str[i]; i++)
  {
    position = str.find(argv[2], i);
    if (position != 1 && position == i)
    {
      outfile << argv[3];
      i += std::string(argv[2]).size() - 1;
    }
    else
    {
      outfile << str[i];
    }
  }
  outfile.close();
}

int main(int argc, char **argv)
{
  std::ifstream infile;
  std::string str;
  char  c;

  if (argc != 4)
  {
    std::cout << "incorrect arguments" << std::endl;
    return(1);
  }
  infile.open(argv[1]);
  if (infile.fail())
  {
    std::cout << "invalid infile" << std::endl;
    return(1);
  }
  while(!infile.eof() && infile >> std::noskipws >> c)
    str += c;
  ft_replace(argv, str);
  infile.close();
  return (0);
}