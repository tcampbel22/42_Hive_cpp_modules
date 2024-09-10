/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:08:00 by tcampbel          #+#    #+#             */
/*   Updated: 2024/08/06 11:40:43 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_HPP
#define	HARL_HPP

#include <iostream>

class Harl
{
private:
	void	debug(void);
	void	warning(void);
	void	info(void);
	void	error(void);
public:
	Harl();
	int		(Harl::*complainPtr)(std::string level);
	void	complain(std::string level);
	~Harl();
};

#endif