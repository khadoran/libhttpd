#ifndef BUF_H
#define BUF_H

/*
	libhttpd - a C library to aid serving and responding to HTTP requests

	Copyright (C) 2009 onwards  Attie Grande (attie@attie.co.uk)

	libxbee is free software: you can redistribute it and/or modify it
	under the terms of the GNU Lesser General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	libxbee is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	See the
	GNU Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public License
	along with libxbee. If not, see <http://www.gnu.org/licenses/>.
*/


struct buf {
	size_t pos; /* for the user, isn't used in here! */
	size_t len; /* if len is zero, you should NOT use the byte that's already allocated */
	unsigned char data[1];
};

struct buf *buf_alloc(struct buf *_buf, size_t size);
void buf_free(struct buf *buf);

#endif /* BUF_H */