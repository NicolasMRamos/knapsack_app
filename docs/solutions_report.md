# Complexity Report

## Bruteforce + Backtracking

### Time complexity
O(2^n), in the worst case, tries all combinations.

### Spatial complexity
O(n^2) due to recursion depth and copying of state vectors.

## Greedy

### Time complexity
O(n log n) due to sorting.

### Spatial complexity
O(n) for storing intermediate data.

## Dynamic Programming
The Dynamic Programming approach is pseudo-polynomial,
due to the fact that the bigger the input the worse the
running time is, because of the table.

### Time complexity
O(n * W), where `n` is the number of pallets and `W` is the truck capacity.

### Spatial complexity
O(n * W) for storing the DP table.

## ILP
### Time complexity
O(2^n) in the worst case (NP-hard).<br>
However, in practice, modern solvers apply heuristics 
(presolve, branch-and-bound, cutting planes) 
that make the runtime much lower for typical instances.

### Spatial complexity
O(2^n) in the worst case, as ILP solvers may create exponentially 
large branch-and-bound trees or constraint structures.

# Comparing Complexities

Brute-Force performs reasonably on small datasets.  
However, for larger datasets like dataset 6, it would take an 
astronomically long time to find the solution.

Generally, greedy is the fastest algorithm.

The dynamic programming approach is consistently quick, but not always the fastest.

ILP has, by far, the worst running time of all the approaches for the datasets given on average.<br>
However, it seems like it is faster on larger datasets when compared to Dynamic Programming and Backtracking,
as it can be noticed on dataset 6.

# Solution Accuracy

Brute-Force and Dynamic Programming consistently yield the optimal solution.

ILP matches the optimal solution in all tested datasets.

Greedy may significantly underperform, especially in datasets where item selection is non-trivial.<br>
As seen in dataset 10, the Greedy algorithm yields a suboptimal solution due to its tendency 
to select items based purely on a greedy heuristic (highest value-to-weight ratio).<br>
This algorithm performs better in the Fractional Knapsack Problem.