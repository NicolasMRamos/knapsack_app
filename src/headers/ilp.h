/**
* @file ilp.h
 * @brief Header for the ILP algorithm implementation of the 0/1 Knapsack problem.
 */

#ifndef ILP_H
#define ILP_H

#include "structs.h"
#include <utility>
#include <vector>
#include <fstream>
#include <iostream>

/**
 * @brief Solves the 0/1 Knapsack problem using integer linear programming.
 *
 * This function utilizes a python script that calls an ILP solver for the Knapsack problem.
 *
 * @param pallets Reference to a vector of `Pallet` objects (defined in `structs.h`).
 *                Each pallet must have `id`, `weight`, and `profit` fields.
 * @param capacity Maximum weight capacity of the truck.
 * @return A `std::pair` where:
 *         - `first` is the total profit of selected pallets.
 *         - `second` is a vector of IDs of the selected pallets.
 *
 * @note The following complexities refer to the python script.
 * The C++ part of this solution is just handling the I/O files to present the solution.
 * @note Time complexity: O(2^n) in the worst case (NP-hard),
 * but often much lower in practice due to modern solver heuristics.
 * For small to moderate datasets, the execution time appears nearly constant.
 * For larger datasets, the time increases but still remains manageable,
 * thanks to pruning and optimization techniques.
 * @note Space complexity: O(2^n) in the worst case, as solvers may use complex data structures growing with problem size.
 * @see ilp.cpp for the implementation of the C++ file handler.
 * @see knapsack_solver.py for the python script.
 */

std::pair<int, std::vector<int>> ilpApproach(std::vector<Pallet> &pallets, int capacity);

#endif //ILP_H
