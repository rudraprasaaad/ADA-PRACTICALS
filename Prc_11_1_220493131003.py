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
G = nx.Graph()
for i in range(len(graph)):
    G.add_node(i)
for i in range(len(graph)):
    for j in range(i + 1, len(graph[i])):
        if graph[i][j] != 0:
            G.add_edge(i, j, weight=graph[i][j])
mst = nx.minimum_spanning_tree(G)
pos = nx.spring_layout(G)  # Layout for the nodes
labels = nx.get_edge_attributes(G, "weight")
labels = {(i, j): labels[(i, j)] for i, j in mst.edges()}
nx.draw_networkx_nodes(G, pos)
nx.draw_networkx_edges(G, pos)
nx.draw_networkx_labels(G, pos)
nx.draw_networkx_edge_labels(G, pos, edge_labels=labels)
nx.draw(mst, pos, with_labels=False, edge_color="r", width=2)  # Highlight the MST edges in red
plt.show()
