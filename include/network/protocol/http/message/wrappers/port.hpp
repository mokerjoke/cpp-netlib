#ifndef BOOST_NETWORK_PROTOCOL_HTTP_MESSAGE_PORT_HPP_20100618
#define BOOST_NETWORK_PROTOCOL_HTTP_MESSAGE_PORT_HPP_20100618

// Copyright 2010 (c) Dean Michael Berris.
// Copyright 2010 (c) Sinefunc, Inc.
// Copyright 2011 Google, Inc.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <network/protocol/http/request/request_base.hpp>
#include <boost/optional.hpp>

namespace boost { namespace network { namespace http {

struct port_wrapper {
  port_wrapper(request_base const & request);
  operator boost::uint16_t () const;
  operator boost::optional<boost::uint16_t> () const;
 private:
  request_base const & request_;
};

inline port_wrapper const
port(request_base const & request) {
  return port_wrapper(request);
}

} // namespace http

} // namespace network

} // namespace boost

#endif // BOOST_NETWORK_PROTOCOL_HTTP_MESSAGE_PORT_HPP_20100618
