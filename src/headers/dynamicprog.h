/**
* @file dynamicprog.h
 * @brief Header for the dynamic programming algorithm implementation of the 0/1 Knapsack problem.
 */

#ifndef DYNAMICPROG_H
#define DYNAMICPROG_H

#include "structs.h"
#include <vector>
#include <algorithm>

/**
 * @brief Solves the 0/1 Knapsack problem using dynamic programming.
 *
 * This function uses a bottom-up dynamic programming approach to find the most profitable subset
 * of pallets that can be carried by the truck without exceeding its weight capacity. It builds a
 * DP table to compute the maximum profit for each subproblem and then backtracks to determine the
 * items that were included in the optimal solution.
 *
 * @param pallets Reference to a vector of `Pallet` objects (defined in `structs.h`).
 *                Each pallet must have `id`, `weight`, and `profit` fields.
 * @param capacity Maximum weight capacity of the truck.
 * @return A `std::pair` where:
 *         - `first` is the total profit of selected pallets.
 *         - `second` is a vector of IDs of the selected pallets.
 *
 * @note The Dynamic Programming approach is pseudo-polynomial,
 * due to the fact that the bigger the input the worse the
 * running time is, because of the table.
 * @note Time complexity: O(n * W), where `n` is the number of pallets and `W` is the truck capacity.
 * @note Space complexity: O(n * W) due to the DP table.
 * @see dynamicprog.cpp for the implementation.
 */

std::pair<int, std::vector<int>> dpApproach(const std::vector<Pallet>& pallets, int capacity);

#endif //DYNAMICPROG_H
