#ifndef BOOST_NETWORK_PROTOCOL_HTTP_MESSAGE_HEADER_NAME_HPP_20101028
#define BOOST_NETWORK_PROTOCOL_HTTP_MESSAGE_HEADER_NAME_HPP_20101028

// Copyright 2010 Dean Michael Berris.
// Copyright 2012 Google, Inc.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <network/protocol/http/message/header.hpp>
#include <utility>

namespace boost { namespace network { namespace http {

    template <class T1, class T2>
    T1 & 
    name(std::pair<T1,T2> const & p) {
        return p.first;
    }

    inline std::string const &
    name(request_header const & h) {
        return h.name;
    }

    inline std::string const &
    name(response_header const & h) {
        return h.name;
    }

} /* http */
    
} /* network */
    
} /* boost */

#endif /* BOOST_NETWORK_PROTOCOL_HTTP_MESSAGE_HEADER_NAME_HPP_20101028 */
