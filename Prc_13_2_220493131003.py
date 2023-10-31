# ///


# Do run in Google Colab


# ///

import networkx as nx
import matplotlib.pyplot as plt
from collections import deque
G = nx.Graph()
G.add_edges_from([(1, 2), (1, 3), (2, 4), (2, 5), (3, 6), (3, 7)])

def bfs(graph, start, visited):
    queue = deque([start])
    visited[start] = True

    while queue:
        node = queue.popleft()
        for neighbor in graph.neighbors(node):
            if not visited[neighbor]:
                visited[neighbor] = True
                queue.append(neighbor)
visited = {node: False for node in G.nodes()}
start_node = 1  
if start_node not in G.nodes():
    print("Start node is not in the graph.")
else:
    bfs(G, start_node, visited)

    pos = nx.spring_layout(G)
    node_colors = ['r' if visited[node] else 'b' for node in G.nodes()]
    nx.draw(G, pos, with_labels=True, node_color=node_colors)
    plt.show()
