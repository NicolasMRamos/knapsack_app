/**
* @file backtracking.h
 * @brief Header for the backtracking algorithm implementation of the 0/1 Knapsack problem.
 */

#ifndef BRUTEFORCE_H
#define BRUTEFORCE_H

#include "structs.h"
#include <utility>
#include <vector>
#include <algorithm>

/**
 * @brief Solves the 0/1 Knapsack problem using a backtracking approach.
 *
 * The algorithm tries various combinations (as a decision tree), pruning impossible branches and choosing the best.
 *
 * @param pallets Reference to a vector of `Pallet` objects (defined in `structs.h`).
 *                Each pallet must have `id`, `weight`, and `profit` fields.
 * @param capacity Maximum weight capacity of the truck.
 * @return A `std::pair` where:
 *         - `first` is the total profit of selected pallets.
 *         - `second` is a vector of IDs of the selected pallets.
 *
 * @note Time complexity: O(2^n), in the worst case, tries all combinations.
 * @note Space complexity: O(n^2) due to recursion depth and copying of state vectors.
 * @see backtracking.cpp for the implementation.
 */

std::pair<int, std::vector<int>> backtrackingApproach(const std::vector<Pallet> &pallets, int capacity);

#endif //BRUTEFORCE_H