//
// Copyright (c) 2021 Vinnie Falco (vinnie.falco@gmail.com)
// Copyright (c) 2022 Alan de Freitas (alandefreitas@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/alandefreitas/socks_io
//

// Test that header file is self-contained.
#include <boost/socks_io/error.hpp>

#include <memory>

#include "test_suite.hpp"

namespace boost {
namespace socks_io {

class error_test
{
public:
    void
    run()
    {
    }
};

TEST_SUITE(error_test, "boost.socks_io.error");

} // socks_io
} // boost
