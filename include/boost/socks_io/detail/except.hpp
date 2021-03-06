//
// Copyright (c) 2019 Vinnie Falco (vinnie.falco@gmail.com)
// Copyright (c) 2022 Alan de Freitas (alandefreitas@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/alandefreitas/socks_io
//

#ifndef BOOST_SOCKS_IO_DETAIL_EXCEPT_HPP
#define BOOST_SOCKS_IO_DETAIL_EXCEPT_HPP

#include <boost/socks_io/error.hpp>
#include <boost/assert/source_location.hpp>
#include <boost/exception/diagnostic_information.hpp>

namespace boost {
namespace socks_io {
namespace detail {

BOOST_SOCKS_IO_DECL void BOOST_NORETURN throw_bad_alloc(source_location const& loc);
BOOST_SOCKS_IO_DECL void BOOST_NORETURN throw_invalid_argument(char const* what, source_location const& loc);
BOOST_SOCKS_IO_DECL void BOOST_NORETURN throw_length_error(char const* what, source_location const& loc);
BOOST_SOCKS_IO_DECL void BOOST_NORETURN throw_out_of_range(source_location const& loc);
BOOST_SOCKS_IO_DECL void BOOST_NORETURN throw_system_error(error_code const& ec, source_location const& loc);

} // detail
} // socks_io
} // boost

#endif
