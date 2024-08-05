/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:18:19 by tcampbel          #+#    #+#             */
/*   Updated: 2024/08/05 17:45:17 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
private:
	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);
	void 		(Harl::*complainPtr[4])();
public:
	Harl();
	~Harl();
	void		complain(std::string level);
};
#endif