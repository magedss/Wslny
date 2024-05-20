import networkx as nx
import matplotlib.pyplot as plt


lis = []

with open('graph.txt') as f:
	lines = f.readlines()
	for i in lines:
		lis.append(i[:-1].split(' '))

filename = lis[0][0]
lis = lis[1:]
#print(lis)

edges = []
colors = []
widths = []

G = nx.Graph()

for i in lis:
	G.add_edge(i[0],i[1])
	if(i[2]=='1'):
		colors.append("green")
		widths.append(3)
	else:
		colors.append("black")
		widths.append(2)

nx.draw_random(G,with_labels=True,edge_color=colors,width=widths,node_size = 1000)
plt.savefig(filename+'.png',facecolor='#E0E0E0',dpi = 75)
