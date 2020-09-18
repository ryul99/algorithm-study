#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;
//https://www.acmicpc.net/problem/2805
int main(int argc, char const *argv[]) {
    int num_tree, want_length;
    vector<long long> trees;
    scanf("%d %d", &num_tree, &want_length);
    for (int i = 0; i < num_tree; i++) {
        long long length;
        scanf("%lld", &length);
        trees.push_back(length);
    }
    trees.push_back(0);
    sort(trees.begin(), trees.end(), greater<long long>());
    int num_higher_trees = 0;
    long long last_tree = trees[0];
    long long having_trees = 0;
    long long current_tree = 0;
    for (long long tree : trees) {
        current_tree = tree;
        having_trees += (last_tree - tree) * num_higher_trees;
        if (having_trees >= want_length)
            break;
        num_higher_trees++;
        last_tree = current_tree;
    }
    current_tree += (having_trees - want_length) / num_higher_trees;
    printf("%lld\n", current_tree);
    return 0;
}