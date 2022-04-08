//
// Copyright (c) 2019 Vinnie Falco (vinnie.falco@gmail.com)
// Copyright (c) 2022 Alan de Freitas (alandefreitas@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/alandefreitas/socks_io
//

#ifndef BOOST_SOCKS_IO_SRC_HPP
#define BOOST_SOCKS_IO_SRC_HPP

/*

This file is meant to be included once,
in a translation unit of the program.

*/

#ifndef BOOST_SOCKS_IO_SOURCE
#define BOOST_SOCKS_IO_SOURCE
#endif

// We include this in case someone is
// using src.hpp as their main header file
#include <boost/socks_io.hpp>

#include <boost/socks_io/impl/version.ipp>
#include <boost/socks_io/impl/status.ipp>
#include <boost/socks_io/detail/impl/except.ipp>

#endif
