/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl_filter.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:15:36 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/17 16:24:19 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_FILTER_HPP
#define HARL_FILTER_HPP

#include <iostream>

class Harl
{
private:
	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);
public:
	Harl();
	~Harl();
	void		complain(std::string level);
};
#endif