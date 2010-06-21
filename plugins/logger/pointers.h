/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Monkey HTTP Daemon
 *  ------------------
 *  Copyright (C) 2001-2010, Eduardo Silva P. <edsiper@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include "memory.h"

/* Request error messages for log file */
#define ERROR_MSG_400 "[error 400] Bad Request"
#define ERROR_MSG_403 "[error 403] Forbidden"
#define ERROR_MSG_404 "[error 404] Not Found"
#define ERROR_MSG_405 "[error 405] Method Not Allowed"
#define ERROR_MSG_408 "[error 408] Request Timeout"
#define ERROR_MSG_411 "[error 411] Length Required"
#define ERROR_MSG_500 "[error 500] Internal Server Error"
#define ERROR_MSG_501 "[error 501] Not Implemented"
#define ERROR_MSG_505 "[error 505] HTTP Version Not Supported"

#define MK_LOGGER_IOV_DASH " - "
#define MK_LOGGER_IOV_SPACE " "
#define MK_LOGGER_IOV_EMPTY "- "

/* mk pointers for errors */
mk_pointer error_msg_400;
mk_pointer error_msg_403;
mk_pointer error_msg_404;
mk_pointer error_msg_405;
mk_pointer error_msg_408;
mk_pointer error_msg_411;
mk_pointer error_msg_500;
mk_pointer error_msg_501;
mk_pointer error_msg_505;

/* mk pointer for IOV */
mk_pointer mk_logger_iov_dash;
mk_pointer mk_logger_iov_space;
mk_pointer mk_logger_iov_crlf;
mk_pointer mk_logger_iov_empty;

/* functions */
void mk_logger_init_pointers();
