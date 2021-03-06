//
// Copyright (c) 2021 Vinnie Falco (vinnie.falco@gmail.com)
// Copyright (c) 2022 Alan de Freitas (alandefreitas@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/alandefreitas/socks_io
//

#ifndef BOOST_SOCKS_IO_VERSION_HPP
#define BOOST_SOCKS_IO_VERSION_HPP

#include <boost/socks_io/detail/config.hpp>
#include <boost/socks_io/string_view.hpp>
#include <iosfwd>

namespace boost {
namespace socks_io {

/** Constants representing SOCKS versions.

    Only versions 4 and 5 are recognized.
*/
enum class version : char
{
    socks_4_0 = 40,
    socks_5_0 = 50
};

/** Return the serialized string representing the SOCKS version
*/
BOOST_SOCKS_IO_DECL
string_view
to_string(version v) noexcept;

/** Format the version to an output stream.
*/
BOOST_SOCKS_IO_DECL
std::ostream&
operator<<(std::ostream& os, version v);

} // socks_io
} // boost

#endif
