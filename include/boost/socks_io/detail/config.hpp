//
// Copyright (c) 2019 Vinnie Falco (vinnie.falco@gmail.com)
// Copyright (c) 2022 Alan de Freitas (alandefreitas@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/alandefreitas/socks_io
//

#ifndef BOOST_SOCKS_IO_DETAIL_CONFIG_HPP
#define BOOST_SOCKS_IO_DETAIL_CONFIG_HPP

#include <boost/config.hpp>
#include <stdint.h>

namespace boost {

namespace socks_io {

#if defined(BOOST_SOCKS_IO_DOCS)
# define BOOST_SOCKS_IO_DECL
# define BOOST_SOCKS_IO_PROTECTED private
#else
# define BOOST_SOCKS_IO_PROTECTED protected
# if (defined(BOOST_SOCKS_IO_DYN_LINK) || defined(BOOST_ALL_DYN_LINK)) && !defined(BOOST_SOCKS_IO_STATIC_LINK)
#  if defined(BOOST_SOCKS_IO_SOURCE)
#   define BOOST_SOCKS_IO_DECL        BOOST_SYMBOL_EXPORT
#   define BOOST_SOCKS_IO_BUILD_DLL
#  else
#   define BOOST_SOCKS_IO_DECL        BOOST_SYMBOL_IMPORT
#  endif
# endif // shared lib
# ifndef  BOOST_SOCKS_IO_DECL
#  define BOOST_SOCKS_IO_DECL
# endif
# if !defined(BOOST_SOCKS_IO_SOURCE) && !defined(BOOST_ALL_NO_LIB) && !defined(BOOST_SOCKS_IO_NO_LIB)
#  define BOOST_LIB_NAME boost_socks_io
#  if defined(BOOST_ALL_DYN_LINK) || defined(BOOST_SOCKS_IO_DYN_LINK)
#   define BOOST_DYN_LINK
#  endif
#  include <boost/config/auto_link.hpp>
# endif
#endif

#if 0 // defined but not used yet
using off_t = ::uint16_t; // private

// maximum size of http header,
// chunk header, or chunk extensions
#ifndef BOOST_SOCKS_IO_MAX_HEADER
#define BOOST_SOCKS_IO_MAX_HEADER 65535U
#endif
static constexpr auto max_off_t =
    BOOST_SOCKS_IO_MAX_HEADER;
#endif

} // socks_io

} // boost

#endif
