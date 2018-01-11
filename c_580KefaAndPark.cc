#include <iostream>
#include <map>
#include <vector>

using std::map;
using std::vector;
using std::cin;
using std::cout;

vector<bool> visit;
vector<bool> has_cat;
map<int, vector<int>> graph;
auto limit = 0;

decltype(auto) dfs(int vertex, int past_cat_num) {
    // visit the vertex;
    if (visit.at(vertex))
        return 0;
    visit.at(vertex) = true;
    // cat num;
    if (has_cat.at(vertex))
        ++ past_cat_num;
    else past_cat_num = 0;

    if (past_cat_num > limit)
        return 0;

    if (graph[vertex].size() == 1 && visit.at(graph[vertex][0]))
        return 1;

    auto ret = 0;
    for(auto son_order= 0; son_order < graph[vertex].size(); ++ son_order)
        ret += dfs(graph[vertex][son_order], past_cat_num);
    return ret;
}

int main(int argc, char* argv[]) {
    auto vertex_num = 0;
    cin >> vertex_num >> limit;
    
    visit.resize(vertex_num + 1);
    has_cat.resize(vertex_num + 1);

    auto cat_num = 0;
    for(auto i = 0; i < vertex_num; ++ i) {
        cin >> cat_num;
        has_cat.at(i) = ((1 == cat_num) ? true : false);
    }
    auto pre_node = 0; 
    auto post_node = 0;
    for(auto i = 0; i < vertex_num - 1; ++ i) {
        cin >> pre_node >> post_node;
        if(! graph.count(pre_node)) {
            graph[pre_node] = vector<int>();
        } 

        if(! graph.count(post_node)) {
            graph[post_node] = vector<int>();
        }
        graph[pre_node].push_back(post_node);
        graph[post_node].push_back(pre_node);
    }
    cout << dfs(1,0) << '\n';
    return 0;
}
