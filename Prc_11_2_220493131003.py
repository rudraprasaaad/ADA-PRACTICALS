
# ///


# Do run in Google Colab


# ///

import networkx as nx
import matplotlib.pyplot as plt
graph = [
    [0, 2, 0, 6, 0],
    [2, 0, 3, 8, 5],
    [0, 3, 0, 0, 7],
    [6, 8, 0, 0, 9],
    [0, 5, 7, 9, 0]
]
edges = []
for i in range(len(graph)):
    for j in range(i + 1, len(graph[i])):
        if graph[i][j] != 0:
            edges.append((i, j, graph[i][j]))

edges.sort(key=lambda x: x[2])
G = nx.Graph()
for i in range(len(graph)):
    G.add_node(i)
mst_edges = []
for edge in edges:
    u, v, weight = edge
    if not nx.has_path(G, u, v):
        G.add_edge(u, v, weight=weight)
        mst_edges.append(edge)
pos = nx.spring_layout(G)  
labels = nx.get_edge_attributes(G, "weight")
nx.draw_networkx_nodes(G, pos)
nx.draw_networkx_edges(G, pos)
nx.draw_networkx_labels(G, pos)
nx.draw_networkx_edge_labels(G, pos, edge_labels=labels)
nx.draw(G, pos, with_labels=False)
plt.show()

