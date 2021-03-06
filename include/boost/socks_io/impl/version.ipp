//
// Copyright (c) 2019 Vinnie Falco (vinnie.falco@gmail.com)
// Copyright (c) 2022 Alan de Freitas (alandefreitas@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/CPPAlliance/http_proto
//

#ifndef BOOST_SOCKS_IO_IMPL_VERSION_IPP
#define BOOST_SOCKS_IO_IMPL_VERSION_IPP

#include <boost/socks_io/version.hpp>
#include <ostream>

namespace boost {
namespace socks_io {

string_view
to_string(version v) noexcept
{
    switch(v)
    {
    case version::socks_4_0:
        return "SOCKS/4.0";
    default:
    case version::socks_5_0:
        return "SOCKS/5.0";
    }
}

std::ostream&
operator<<(
    std::ostream& os,
    version v)
{
    os << to_string(v);
    return os;
}

} // http_proto
} // boost

#endif
