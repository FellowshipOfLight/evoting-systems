#ifndef _SAVE_AND_VERIFY_H
#define _SAVE_AND_VERIFY_H
/* This file is (C) copyright 2001 Software Improvements, Pty Ltd.
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/
/* Save and verify a vote */
#include <common/database.h>
#include <common/evacs.h>
#include <common/voting_errors.h>
#include <common/http.h>
#include <common/barcode.h>

extern enum error save_and_verify(PGconn *conn,
				  const struct preference_set *vote,
				  const struct barcode *bc,
				  const struct electorate *elec,
				  const struct http_vars *vars);
#endif /*_SAVE_AND_VERIFY_H*/
