/*
 * Flox Engine
 * Developed by Evgenii Makarov (https://github.com/eeiaao)
 *
 * Copyright (c) 2025 Evgenii Makarov
 * Licensed under the MIT License. See LICENSE file in the project root for full
 * license information.
 */

#pragma once

#include <cstdint>

namespace flox {

enum class OrderType { LIMIT, MARKET };
enum class Side { BUY, SELL };

using SymbolId = uint32_t;

} // namespace flox