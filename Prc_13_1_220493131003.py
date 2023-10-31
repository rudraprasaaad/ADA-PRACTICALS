#///

#Do run in Google Colab

#///

import networkx as nx import matplotlib.pyplot as plt G = nx.Graph()
                                                                       G.add_edges_from([(1, 2), (1, 3), (2, 4), (2, 5), (3, 6), (3, 7)]) def dfs(graph, start, visited) :visited[start] = True for neighbor in graph.neighbors(start) : if not visited[neighbor] :dfs(graph, neighbor, visited) visited = {node:False for node in G.nodes() } start_node = 1 #Change this to the node you want to start from if start_node not in G.nodes() :print("Start node is not in the graph.") else :dfs(G, start_node, visited)

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    pos = nx.spring_layout(G) node_colors =['r' if visited[node] else 'b' for node in G.nodes()] nx.draw(G, pos, with_labels = True, node_color = node_colors) plt.show()
