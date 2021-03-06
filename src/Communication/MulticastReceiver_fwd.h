// Copyright (c) 2009, 2010, 2011 Object Computing, Inc.
// All rights reserved.
// See the file license.txt for licensing information.
//
#ifdef _MSC_VER
# pragma once
#endif
#ifndef MULTICASTRECEIVER_FWD_H
#define MULTICASTRECEIVER_FWD_H
#ifndef QUICKFAST_HEADERS
#error Please include <Application/QuickFAST.h> preferably as a precompiled header file.
#endif //QUICKFAST_HEADERS

namespace QuickFAST{
  namespace Communication{
    class MulticastReceiver;
    /// @brief smart pointer to a MulticastReceiver
    typedef boost::shared_ptr<MulticastReceiver> MulticastReceiverPtr;
  }
}
#endif // MULTICASTRECEIVER_FWD_H
