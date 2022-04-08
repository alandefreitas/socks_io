//
// Copyright (c) 2021 Vinnie Falco (vinnie.falco@gmail.com)
// Copyright (c) 2022 Alan de Freitas (alandefreitas@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/alandefreitas/socks_io
//

#ifndef BOOST_SOCKS_IO_CONNECT_V4_HPP
#define BOOST_SOCKS_IO_CONNECT_V4_HPP

#include <boost/socks_io/detail/config.hpp>
#include <boost/socks_io/string_view.hpp>
#include <boost/socks_io/error.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <iosfwd>

namespace boost {
namespace socks_io {

/** Connect to the application server through a SOCKS4 server

    This function establishes a connection to the
    application server through a SOCKS4 server.

    @par Preconditions

    The `SyncStream` should be connected to a SOCKS4 server.

    @par Example
    @code
    boost::asio::connect(s, resolver.resolve(socks_host, socks_service));
    socks_io::connect(s, app_host_endpoint, "username", ec);
    @endcode

    @param s SyncStream connected to a SOCKS server.
    @param endpoint Application server endpoint.
    @param user_id SOCKS server user id.
    @param ec Error code.

    @par References
    @li <a href="https://www.openssh.com/txt/socks4.protocol">
        SOCKS: A protocol for TCP proxy across firewalls</a>

*/
template<class SyncStream>
void connect_v4(
    SyncStream & s,
    const asio::ip::tcp & endpoint,
    string_view user_id,
    error_code & ec);

/** Asynchronously connect to the application server through a SOCKS4 server

    This function establishes a connection to the
    application server through a SOCKS4 server.

    @par Preconditions

    The `AsyncStream` should be connected to a SOCKS4 server.

    @par Example
    @code
    boost::asio::connect(s, resolver.resolve(socks_host, socks_service));
    socks_io::async_connect_v4(
        s, app_host_endpoint, "username", ec, [](error_code ec)
    {
        if (!ec)
        {
            // write to the application host
            do_write();
        }
    });
    @endcode

    @param s SyncStream connected to a SOCKS server.
    @param endpoint Application server endpoint.
    @param user_id SOCKS server user id.
    @param ec Error code.

    @par References
    @li <a href="https://www.openssh.com/txt/socks4.protocol">
        SOCKS: A protocol for TCP proxy across firewalls</a>

*/
template<
    class AsyncStream,
    BOOST_ASIO_COMPLETION_TOKEN_FOR(
        void (boost::system::error_code))
        ConnectToken
            BOOST_ASIO_DEFAULT_COMPLETION_TOKEN_TYPE(
                typename AsyncStream::executor_type)
    >
BOOST_ASIO_INITFN_AUTO_RESULT_TYPE(
    ConnectToken,
    void (boost::system::error_code))
async_connect_v4(
    AsyncStream & s,
    const asio::ip::tcp & endpoint,
    string_view user_id,
    ConnectToken && token);

} // socks_io
} // boost

#endif
