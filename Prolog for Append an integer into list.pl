append([],L,L).
append([X|L1],L2,[X|L3]) :- append(L1,L2,L3).

output:

append([1 2 3 4 ],[5],x)
x=(1 2 3 4 5)
append([1 2 3 4],[5],x)
 
