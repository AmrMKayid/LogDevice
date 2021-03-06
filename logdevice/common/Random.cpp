/**
 * Copyright (c) 2018-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */
#include "logdevice/common/Random.h"

namespace facebook { namespace logdevice {

DefaultRNG& DefaultRNG::get() {
  static DefaultRNG r;
  return r;
}

}} // namespace facebook::logdevice
