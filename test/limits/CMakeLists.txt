#
# Copyright (c) 2019 Vinnie Falco (vinnie.falco@gmail.com)
# Copyright (c) 2022 Alan de Freitas (alandefreitas@gmail.com)
#
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#
# Official repository: https://github.com/alandefreitas/socks_io
#

set(TEST_MAIN ../../extra/test_main.cpp)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES limits.cpp Jamfile)
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR}/../../extra PREFIX "_extra" FILES ${TEST_MAIN})
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR}/../../src PREFIX "_extra" FILES ../../src/src.cpp)
add_executable(boost_socks_io_limits limits.cpp Jamfile ${TEST_MAIN} ../../src/src.cpp)
target_include_directories(boost_socks_io_limits PRIVATE ../../include ../../extra/include ../../..)
target_compile_definitions(boost_socks_io_limits PRIVATE
    BOOST_SOCKS_IO_MAX_HEADER=20
    BOOST_SOCKS_IO_NO_LIB=1
    BOOST_SOCKS_IO_STATIC_LINK
)
target_link_libraries(boost_socks_io_limits PRIVATE
    boost_socks_io
)
target_link_libraries(boost_socks_io_limits INTERFACE Boost::socks_io)
add_test(NAME boost_socks_io_limits COMMAND boost_socks_io_limits)


