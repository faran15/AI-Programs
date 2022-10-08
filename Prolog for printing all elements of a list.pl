printlist([]).
printlist([X|List]) :- write(X),nl, printlist(List).

output:

1
2
3
4
5
6
true
