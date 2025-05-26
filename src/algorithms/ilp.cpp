#include "ilp.h"

std::pair<int, std::vector<int>> ilpApproach(std::vector<Pallet> &pallets, int capacity) {
    std::pair<int, std::vector<int>> result;
    std::ofstream file("../src/algorithms/ilp/input.txt");
    file << pallets.size() << '\n' << capacity << '\n';
    for (int i = 0; i < pallets.size(); i++)
        file << pallets[i].weight << ' ';

    file << '\n';
    for (int i = 0; i < pallets.size(); i++)
        file << pallets[i].profit << ' ';

    file.close();
    int ret = system("../venv/bin/python ../src/knapsack_solver.py ../src/algorithms/ilp/input.txt ../src/algorithms/ilp/output.txt");

    if (ret) {
        std::cerr << "Solver failed\n";
        return {};
    }

    std::ifstream fileIn("../src/algorithms/ilp/output.txt");

    fileIn >> result.first;
    int weight;
    fileIn >> weight;

    int id;
    while (fileIn >> id) {
        result.second.push_back(id);
    }

    return result;
}
