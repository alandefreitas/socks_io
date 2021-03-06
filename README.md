# Boost.Socks.Io

> SOCKS parsing and serialization algorithms using C++11

Boost.Socks.Io is a portable, low-level C++ library which provides containers and algorithms for implementing the
SOCKS protocol described in the document
[RFC1928: SOCKS Protocol Version 5](https://datatracker.ietf.org/doc/html/rfc1928), and extensions described
in [RFC1929](https://datatracker.ietf.org/doc/html/rfc1929),
[RFC1961](https://datatracker.ietf.org/doc/html/rfc1961), and
[RFC3089](https://datatracker.ietf.org/doc/html/rfc3089).

### This is currently **NOT** an official Boost library.

### Build Status

Branch          | GH Actions                                                                                                                                                                     | Drone                                                                                                                                   | Appveyor                                                                                                                                                                                          | codecov.io                                                                                                                                                   | Docs | 
:-------------: |--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| --------------------------------------------------------------------------------------------------------------------------------------------------------------| ---- | 
[`master`](https://github.com/alandefreitas/socks_io/tree/master)   | [![CI](https://github.com/alandefreitas/socks_io/actions/workflows/ci.yml/badge.svg?branch=master)](https://github.com/alandefreitas/socks_io/actions/workflows/ci.yml)  | [![Build Status](https://drone.cpp.al/api/badges/alandefreitas/socks_io/status.svg)](https://drone.cpp.al/alandefreitas/socks_io) | [![Build status](https://ci.appveyor.com/api/projects/status/github/alandefreitas/socks_io?branch=master&svg=true)](https://ci.appveyor.com/project/alandefreitas/socks-io/branch/master)   | [![codecov](https://codecov.io/gh/alandefreitas/socks_io/branch/master/graph/badge.svg)](https://codecov.io/gh/alandefreitas/socks_io/branch/master)   | [![Documentation](https://img.shields.io/badge/docs-master-brightgreen.svg)](httpd://master.socks-io.cpp.al)
[`develop`](https://github.com/alandefreitas/socks_io/tree/develop) | [![CI](https://github.com/alandefreitas/socks_io/actions/workflows/ci.yml/badge.svg?branch=develop)](https://github.com/alandefreitas/socks_io/actions/workflows/ci.yml) | [![Build Status](https://drone.cpp.al/api/badges/alandefreitas/socks_io/status.svg)](https://drone.cpp.al/alandefreitas/socks_io) | [![Build status](https://ci.appveyor.com/api/projects/status/github/alandefreitas/socks_io?branch=develop&svg=true)](https://ci.appveyor.com/project/alandefreitas/socks-io/branch/develop) | [![codecov](https://codecov.io/gh/alandefreitas/socks_io/branch/develop/graph/badge.svg)](https://codecov.io/gh/alandefreitas/socks_io/branch/develop) | [![Documentation](https://img.shields.io/badge/docs-develop-brightgreen.svg)](https://develop.socks-io.cpp.al)

## Properties

Boost.Socks.Io offers these features:

* Require only C++11
* Works without exceptions
* Fast compilation, no templates
* Strict compliance with rfc1928

### Requirements

* Requires Boost and a compiler supporting at least C++11
* Aliases for standard types use their Boost equivalents
* Link to a built static or dynamic Boost library, or use header-only (see below)
* Supports -fno-exceptions, detected automatically

### Header-Only

To use the library as header-only; that is, to eliminate the requirement to link a program to a static or dynamic
Boost.Socks.Io library, simply place the following line in exactly one new or existing source file in your project.

```cpp
    #include <boost/socks_io/src.hpp>
```

### Embedded

Boost.Socks.Io works great on embedded devices. It is designed to work without exceptions if desired.

### Supported Compilers

Boost.Socks.Io has been tested with the following compilers:

* clang: 3.8, 4, 5, 6, 7, 8, 9, 10, 11, 12
* gcc: 4.8, 4.9, 5, 6, 7, 8, 9, 10, 11
* msvc: 14.0, 14.1, 14.2, 14.3

### Quality Assurance

The development infrastructure for the library includes these per-commit analyses:

* Coverage reports
* Benchmark performance comparisons
* Compilation and tests on Drone.io, Azure Pipelines, Appveyor
* Fuzzing using clang-llvm and machine learning

## License

Distributed under the [Boost Software License, Version 1.0](http://www.boost.org/LICENSE_1_0.txt).

### More information

* [Report bugs](https://github.com/alandefreitas/socks_io/issues): Be sure to mention Boost version, platform and
  compiler you're using. A small compilable code sample to reproduce the problem is always good as well.
* Submit your patches as pull requests against **develop** branch. Note that by submitting patches you agree to license
  your modifications under the [Boost Software License, Version 1.0](http://www.boost.org/LICENSE_1_0.txt).
* Discussions about the library are held on
  the [Boost developers mailing list](http://www.boost.org/community/groups.html#main). Be sure to read
  the [discussion policy](http://www.boost.org/community/policy.html) before posting and add the `[template]` tag at the
  beginning of the subject line.
