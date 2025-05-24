/*
 * Flox Engine
 * Developed by Evgenii Makarov (https://github.com/eeiaao)
 *
 * Copyright (c) 2025 Evgenii Makarov
 * Licensed under the MIT License. See LICENSE file in the project root for full
 * license information.
 */

#pragma once

#include "flox/engine/symbol_registry.h"
#include <chrono>
#include <memory_resource>
#include <string>
#include <vector>

namespace flox {

enum class BookUpdateType { SNAPSHOT, DELTA };

struct BookLevel {
  double price;
  double quantity;

  BookLevel() = default;
  BookLevel(double p, double q) : price(p), quantity(q) {}
};

struct BookUpdate {
  SymbolId symbol;
  BookUpdateType type;
  std::pmr::vector<BookLevel> bids;
  std::pmr::vector<BookLevel> asks;
  std::chrono::system_clock::time_point timestamp;

  BookUpdate(std::pmr::memory_resource *res) : bids(res), asks(res) {}
};

} // namespace flox
