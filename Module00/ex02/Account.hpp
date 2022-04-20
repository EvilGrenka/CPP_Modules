/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 09:03:16 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/17 09:21:22 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include <ctime>
#include <iostream>
#include <sstream>

class Account {
	public:
		typedef Account		t;
		static int	getNbAccounts( void );
		static int	getTotalAmount( void );
		static int	getNbDeposits( void );
		static int	getNbWithdrawals( void );
		static void	displayAccountsInfos( void );
		
		Account( int initial_deposit );
		~Account( void );

		void	makeDeposit( int deposit );
		bool	makeWithdrawal( int withdrawal );
		int		checkAmount( void ) const;
		void	displayStatus( void ) const;

	private:
		static int	_nbAccounts;
		static int	_totalAmount;
		static int	_totalNbDeposits;
		static int	_totalNbWithdrawals;
		
		static void	_displayTimestamp( void );

		int				_accountIndex;
		int				_amount;
		int				_nbDeposits;
		int				_nbWithdrawals;

		Account( void );
};

#endif
